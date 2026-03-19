#ifndef SQLIST_H
#define SQLIST_H

#define MaxSize 50
typedef int ElemType; 

//静态分配的顺序表
typedef struct{
    ElemType data[MaxSize];
    int length;
}SqList;

void InitList(SqList *L);//初始化
bool ListInsert(SqList *L,int i,ElemType e);//插入，i为位序
bool ListDelete(SqList *L,int i);//删除，i为位序
int LocateElem(SqList *L,ElemType e);//按值查找，返回位序
void PrintList(SqList L);//打印

#endif