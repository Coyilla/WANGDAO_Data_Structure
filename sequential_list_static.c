#include <stdio.h>
#include <stdbool.h>
#include "seq_list.h"
#include "sq_list.h"

//顺序表静态分配

//顺序表的初始化
//SqList L;
void InitList(SqList *L){
    L->length=0;
}

//插入
//1<=i<=L.length
bool ListInsert(SqList *L,int i,ElemType e){
    if(i<1||i>L->length+1)
        return false;
    if(L->length+1>MaxSize)
        return false;
    for(int p=L->length;p>i-1;p--){
        L->data[p]=L->data[p-1];
    }
    L->data[i-1]=e;
    L->length--;
    return true;
}

//删除
//1<=i<=L.length
bool ListDelete(SqList *L,int i){
    if(i<1||i>L->length)
        return false;
    for(int j=i-1;j<L->length-1;j++){
        L->data[j]=L->data[j+1];
    }
    L->length--;
    return true;
}

//按值查找（顺序查找）
//返回位序
int LocateElem(SqList *L,ElemType e){
    for(int i=0;i<L->length;i++){
        if(L->data[i]==e)
            return i+1;
    }
    return 0;
}