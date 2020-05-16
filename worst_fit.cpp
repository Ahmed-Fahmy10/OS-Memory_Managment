#include "my_memory.h"

bool Memory::worst_fit(Process process)
{
    QVector<Segment> segments = process.segments;

    for (int i = 0, n = process.num_of_segments; i < n; i++)
    {
        int size = segments[i].size;
        unsigned int max_size = 0;
        list<Block>::iterator max_block = memory.end();

        for (list<Block>::iterator j = memory.begin(); j != memory.end(); j++)
        {
            if (Is_Empty_Boolean(j->getStart(), j->getStart() + size - 1))
            {
                if (j->getSize() > max_size)
                {
                    max_size = j->getSize();
                    max_block = j;
                }
            }
        }

        if (max_block != memory.end())
        {
            Add_Block(process.name, segments[i].name, max_block->getStart(), size);
        }
        else
        {
            Deallocate_Process(process.name);
            return false;
        }
    }
    return true;
}
