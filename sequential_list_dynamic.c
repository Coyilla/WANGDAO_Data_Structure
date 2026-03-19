#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "seq_list.h"

//顺序表动态分配

//顺序表的初始化
#define InitSize 50
void InitList(SeqList *L){
    L->data=(ElemType *)malloc(sizeof(ElemType)*InitSize);
    L->length=0;
    L->MaxSize=InitSize;
}

//插入
//1<=i<=L.length
bool ListInsert(SeqList *L,int i,ElemType e){
    if(i<1||i>L->length+1)
        return false;
    if(L->length+1>L->MaxSize)
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
bool ListDelete(SeqList *L,int i){
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
int LocateElem(SeqList *L,ElemType e){
    for(int i=0;i<L->length;i++){
        if(L->data[i]==e)
            return i+1;
    }
    return 0;
}

// 打印
void PrintList(SeqList L){
    for(int i=0;i<L.length;i++){
        printf("%d ",L.data[i]);
        
    }
    printf("\n");
}

// 自定义初始化
SeqList CreateList(ElemType arr[],int n){
    SeqList l;
    InitList(&l);
    if(n>l.MaxSize){
        ElemType* p=l.data;
        l.data=(ElemType*)malloc(sizeof(ElemType)*n);
        free(p);
    }    
    for(int i=0;i<n;i++){
        l.data[i]=arr[i];
    }
    
    return l;
}