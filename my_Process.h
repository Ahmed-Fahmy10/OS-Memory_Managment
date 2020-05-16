#ifndef PROCESS_H
#define PROCESS_H

#include <QString>
#include <QVector>
#include "my_block.h"




struct Segment
{
    QString name;
    int size;
};

struct Process
{
    QString name;
    int num_of_segments;
    QVector<Segment> segments;
};

#endif // PROCESS_H
