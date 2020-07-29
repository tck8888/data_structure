//
// Created by tck on 2020/7/26.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//mao pao


void BubbleSort(int a[], int n) {

    int flag;
    int temp = 0;
    for (int i = 0; i < n - 1; i++) {
        flag = 0;
        for (int j = 0; j < n - 1 - j; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            return;
        }
    }
}

int main() {

    int a[] = {9, 8, 7, 6, 10, 4, 3, 2, 1};
    BubbleSort(a, 9);
    for (int i = 0; i < 9; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;
}