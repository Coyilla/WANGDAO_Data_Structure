//对长度为n的顺序表L，编写一个时间复杂度为O(n)、空间复杂度为O(1)的算法，该算法删除顺序表中所有值为x的数据元素
#include <stdio.h>
#include <stdbool.h>
#include "seq_list.h"
#include "chapter.h"

void RemoveX(SeqList *l,ElemType x){
    int remains=0;//不为x，不删的
    for(int i=0;i<l->length;i++){
        if(l->data[i]!=x){
            remains++;
            l->data[remains-1]=l->data[i];
        }
    }
    l->length=remains;
}

int main(){
    SeqList l=CreateList_D((ElemType []){3,5,6,3,7,6,7,4,3},9);
    PrintList_D(l);
    RemoveX(&l,3);
    PrintList_D(l);
}