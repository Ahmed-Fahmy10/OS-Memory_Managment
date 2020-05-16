#include "my_memory.h"

bool Memory::best_fit(Process process)
{
    QVector<Segment> segments = process.segments;

    for (int i = 0, n = process.num_of_segments; i < n; i++)
    {
        int size = segments[i].size;
        unsigned int min_size = 0 - 1;
        list<Block>::iterator min_block = memory.end();

        for (list<Block>::iterator j = memory.begin(); j != memory.end(); j++)
        {
            if (Is_Empty_Boolean(j->getStart(), j->getStart() + size - 1))
            {
                if (j->getSize() < min_size)
                {
                    min_size = j->getSize();
                    min_block = j;
                }
            }
        }

        if (min_block != memory.end())
        {
            Add_Block(process.name, segments[i].name, min_block->getStart(), size);
        }
        else
        {
            Deallocate_Process(process.name);
            return false;
        }
    }
    return true;
}
