#ifndef BLOCK_H
#define BLOCK_H

#include <QtDebug>
#include <list>
#include <QVector>
#include <algorithm>
#include <iterator>
#include <QString>

using namespace std;

class Block
{
private:
    QString Process_Name;
    QString Segment_Name;
    int start;
    int size;
    bool type;

public:
    Block();
    Block(QString PName, QString SName, int Start, int Size, bool Type);

    void setProcessName(QString n);

    void setSegmentName(QString n);

    void setStart(int n);

    void setSize(int n);

    void setType(bool n);

    QString getProcessName();

    QString getSegmentName();

    int getStart();

    int getSize();

    int getEnd();

    bool getType();
};



#endif // BLOCK_H
