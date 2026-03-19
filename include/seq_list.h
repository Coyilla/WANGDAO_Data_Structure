#ifndef SEQLIST_H
#define SEQLIST_H

typedef int ElemType; 

//动态分配的顺序表
typedef struct{
    ElemType *data;
    int length,MaxSize;
}SeqList;

void InitList_D(SeqList *L);//初始化
bool ListInsert_D(SeqList *L,int i,ElemType e);//插入，i为位序
bool ListDelete_D(SeqList *L,int i);//删除，i为位序
int LocateElem_D(SeqList *L,ElemType e);//按值查找，返回位序
void PrintList_D(SeqList L);//打印
SeqList CreateList_D(ElemType arr[],int n);//自定义初始化

#endif