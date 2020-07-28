//
// Created by tck on 2020/7/26.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void f5() {
    int a[9][10];

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 10; ++j) {
            a[i][j] = 1;
        }
    }

    int sum = 0;
    for (int k = 0; k < 9; ++k) {
        for (int i = 0; i < 10; ++i) {
            if (k < 8 ) {
                if (k==7){
                    if (i<5){
                        printf("%d,%d \n", k, i);
                        sum += a[k][i];
                    }
                } else{
                    printf("%d,%d \n", k, i);
                    sum += a[k][i];
                }
            }
        }

    }

    printf("%d", sum);

}

int main() {

    f5();

    return 0;
}