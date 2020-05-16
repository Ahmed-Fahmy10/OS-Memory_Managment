#include "my_memory.h"

bool Memory::first_fit(Process process)
{
    QVector<Segment> segments = process.segments;
    bool found = false;

    for (int i = 0, n = process.num_of_segments; i < n; i++)
    {
        found = false;
        int size = segments[i].size;

        for (list<Block>::iterator j = memory.begin(); j != memory.end(); j++)
        {
            if (Is_Empty_Boolean(j->getStart(), j->getStart() + size - 1))
            {
                Add_Block(process.name, segments[i].name, j->getStart(), size);
                found = true;
                break;
            }
        }

        if (!found)
        {
            Deallocate_Process(process.name);
            return false;
        }
    }
    return true;
}
