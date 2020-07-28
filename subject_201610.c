//
// Created by tck on 2020/7/26.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define arr_size 6

typedef int DataType;

typedef struct dlnode {
    DataType data;
    struct dlnode *prior, *next;
} DLNode;

typedef DLNode *DLinkList;

void f30(DLinkList head) {
    DLNode *p;
    p = head;
    while (p->next!=head){
        p->next->prior=p;
        p=p->next;
    }

    head->prior=p;
}

int main() {


    return 0;
}