//
//  Queen.c
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 23/10/2021.
//

#include <math.h>
#include "Queen.h"

int a[20], count = 0;

void print_result(int n) {
    count++;
    char c = '0';
    char x = '1';
    printf("%d.\n", count);
    for (int i = 1; i <= n; i++) {
        for (int t = 1; t < a[i]; t++) printf(" %c ", c);
        printf(" %c ", x);
        for (int t = a[i] + 1; t <= n; t++) printf(" %c ", c);
        printf("\n");
    }
    printf("\n");
}

int is_candidate(int x, int y) {
    for (int i = 1; i < x; i++) {
        if ((y == a[i]) || (fabs(y-a[i]) == x-i)) {
            return 0;
        }
    }
    return 1;
}

void queen(int i, int n) {  // Quân Hậu ở hàng i, cột j
    for (int j = 1; j <= n; j++) {
        if (is_candidate(i, j)) {
            a[i] = j;
            if (i == n) print_result(n);
            else queen(i+1, n);
        }
    }
}

