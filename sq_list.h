#ifndef SQLIST_H
#define SQLIST_H

#define MaxSize 50
typedef int ElemType; 

//静态分配的顺序表
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;

#endif