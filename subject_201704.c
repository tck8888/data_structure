//
// Created by tck on 2020/7/26.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct node {
    DataType data;
    struct node *next;
} ListNode;

typedef ListNode *LinkList;


int max(DataType a, DataType b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int f30(ListNode *head) {
    if (head == NULL) {
        return 0;
    } else {
        return max(head->data, f30(head->next));
    }
}

/**
 * create list
 * @param arr
 * @param size
 * @return
 */
LinkList CreateListF(const DataType arr[],int size) {
    LinkList head;
    ListNode *p;
    head=NULL;

    for (int index = 0; index < size; index++) {
        p=(ListNode*)malloc(sizeof(ListNode));
        p->data=arr[index];
        p->next=head;
        head=p;
    }
    return head;

}

#define arr_size 6
int main() {
    DataType arr[arr_size] = {2, 12, 16, 88, 5, 10};

    LinkList linkList =  CreateListF(arr,arr_size);

    printf("%d", f30(linkList));

    return 0;
}