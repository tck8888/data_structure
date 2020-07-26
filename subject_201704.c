//
// Created by tck on 2020/7/26.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define arr_size 6

typedef int DataType;
typedef struct node {
    DataType data;
    struct node *next;
} ListNode;

typedef ListNode *LinkList;

/**
 * create list
 * @param arr
 * @param size
 * @return
 */
LinkList CreateListF(const DataType arr[], int size) {
    LinkList head;
    ListNode *p;
    head = NULL;

    for (int index = 0; index < size; index++) {
        p = (ListNode *) malloc(sizeof(ListNode));
        p->data = arr[index];
        p->next = head;
        head = p;
    }
    return head;

}


int max(DataType a, DataType b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

/**
 * topic 30
 * @param head
 * @return linked max value
 */
int f30(ListNode *head) {
    if (head == NULL) {
        return 0;
    } else {
        return max(head->data, f30(head->next));
    }
}

void f31(ListNode *head) {
    if (head == NULL) {
        return;
    } else {
        f31(head->next);
        printf("%d\t", head->data);
    }
}

#define arr_size2 5

int f32(const int A[][arr_size2]) {
    int i, j;
    int sum = 0;
    for (i = 0; i < arr_size2; i++) {
        for (j = 0; j < arr_size2; j++) {
            if (A[i][j] > 0) {
                sum++;
            }
        }
    }
    return sum;
}


typedef struct node1 {
    char data;
    struct node1 *lchild, *rchild;
} BinTNode;

typedef BinTNode *BiTree;

int BiTreeDepth(BiTree bt) {
    int hl = 0, hr = 0;
    if (bt == NULL) {
        return 0;
    } else {
        hl = BiTreeDepth(bt->lchild);
        hr = BiTreeDepth(bt->rchild);
        if (hl > hr) {
            return hl + 1;
        } else {
            return hr + 1;
        }
    }
}

int SearchXNum(BiTree bt, int x) {
    int count = 0;
    if (bt == NULL) {
        return 0;
    }
    if (bt->data >= x) {
        count = 1;
    } else {
        count = 0;
    }

    return count + SearchXNum(bt->lchild, x) + SearchXNum(bt->rchild, x);

}

int main() {
    DataType arr[arr_size] = {2, 12, 16, 88, 5, 10};

    LinkList linkList = CreateListF(arr, arr_size);

    printf("%d\n", f30(linkList));
    f31(linkList);

    printf("\n");

    int arr2[][arr_size2] = {
            {0, 1, 1, 1, 0},
            {0, 0, 0, 1, 0},
            {0, 1, 0, 0, 1},
            {0, 0, 1, 0, 1},
            {0, 1, 0, 0, 0}
    };
    printf("%d\n", f32(arr2));

    return 0;
}