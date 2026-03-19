#ifndef SEQLIST_H
#define SEQLIST_H

typedef int ElemType; 

//动态分配的顺序表
typedef struct{
    ElemType *data;
    int length,MaxSize;
}SeqList;

#endif