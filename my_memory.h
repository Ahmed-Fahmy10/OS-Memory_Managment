#ifndef MEMORY_H
#define MEMORY_H

#include "my_block.h"
#include "my_Process.h"
#include "secondwindow.h"

using namespace std;

class Memory
{
  private:
    list<Block> memory;
    Block Initial_Block;
    int size;
    friend class secondwindow;

  public:
    explicit Memory(int Size);

    explicit Memory();

    ~Memory();

    int getSize();

    void setSize(int Size);

    list<Block>::iterator Find_Iterator(int start, int end);

    list<Block>::iterator Find_Iterator_By_Start(int start);

    bool Is_Empty_Boolean(int start, int end);

    void Add_Block(QString PName, QString SName, int Start, int Size);

    QVector<QString> Flip_Blocks();

    void Remove_Block(list<Block>::iterator i);

    void Compact_Blocks(list<Block>::iterator i);

    void Print_Memory();

    void Deallocate_Process(QString process_name);

    bool best_fit(Process process);

    bool first_fit(Process process);

    bool worst_fit(Process process);

    void newMem();

    void Compact_Memory();
};

#endif // MEMORY_H
