// 设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O(1)。
#include <stdio.h>
#include <stdbool.h>
#include "seq_list.h"
#include "chapter.h"

void Reverse(SeqList *l){
    for(int i=0;i<l->length/2;i++){
        ElemType k=l->data[i];
        l->data[i]=l->data[l->length-i-1];
        l->data[l->length-1]=k;
    }
}

int main(){
    SeqList l=CreateList_D((ElemType []){5, 2, 3, 6, 8, 1, 8, 9, 4},9);
    PrintList_D(l);
    Reverse(&l);
    PrintList_D(l);
}