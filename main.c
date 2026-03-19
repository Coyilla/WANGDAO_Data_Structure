#include <stdio.h>
#include <stdbool.h>
#include "seq_list.h"

int main(){
    SeqList l=CreateList((ElemType []){5, 2, 3, 6, 8, 1, 8, 9, 4},9);
    bool result=DeleteMin(&l);
    if(result){
        PrintList(l);
    }else{
        return 1;
    }
    return 0;
}