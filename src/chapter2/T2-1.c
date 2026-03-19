// 从顺序表中删除具有最小值的元素(假设唯一)并由函数返回被删元素的值。空出的位置由最后一个元素填补，
// 若顺序表为空，则显示出错信息并退出运行。
#include <stdio.h>
#include <stdbool.h>
#include "seq_list.h"
#include "chapter.h"

bool DeleteMin(SeqList *l){
    if(l->length==0){
        return false;
    }
    ElemType min_pos=0;
    for(int i=1;i<l->length;i++){
        if(l->data[i]<l->data[min_pos]){
            min_pos=i;
        }
    }
    l->data[min_pos]=l->data[l->length-1];
    return true;
}

int main(){
    SeqList l=CreateList_D((ElemType []){5, 2, 3, 6, 7, 1, 8, 9, 4},9);
    PrintList_D(l);
    bool result=DeleteMin(&l);
    if(result){
        PrintList_D(l);
    }else{
        return 1;
    }
    printf("hello world\n");
    return 0;
}