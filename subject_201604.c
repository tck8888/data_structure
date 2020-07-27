//
// Created by tck on 2020/7/26.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


int f30(int A[], int n) {
    int m;
    if (n <= 0) {
        return -1;
    }
    if (n == 1) {
        return 0;
    }
    m = f30(A, n - 1);
    if (A[m] > A[n - 1]) {
        return m;
    } else {
        return n - 1;
    }
}

void SelectSort(int A[], int n) {

    int i, j, k;
    for (i = 1; i < n; i++) {
        k = i;
        for (j = i + 1; j <= n; j++) {
            if (A[j] < A[k]) {
                k = j;
            }
        }
        if (k != i) {
            A[0] = A[i];
            A[i] = A[k];
            A[i] = A[0];
        }
    }
}

/*
稳定排序
	直接插入 冒泡 归并 基数排序
不稳定
	直接选择 希尔 快速 堆排序

 * */
int main() {
    int arr[6] = {2, 12, 16, 88, 5, 10};
    SelectSort(arr, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    int A[] = {25, 34, 256, 9, 38, 47, 128, 256, 64};

    printf("%d\n", f30(A, 5));
    printf("%d\n", f30(A, 9));


    return 0;
}