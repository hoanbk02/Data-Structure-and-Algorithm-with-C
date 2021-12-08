//
//  MergeSort.c
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 23/10/2021.
//

#include "MergeSort.h"

void merge(int arr[], int p, int q, int r) {
    int i = p;
    int j = q+1;
}


void merge_sort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p+r)/2;
        merge_sort(arr, p, q);
        merge_sort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}
