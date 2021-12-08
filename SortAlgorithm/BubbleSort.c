//
//  BubbleSort.c
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 10/10/2021.
//

#include "BubbleSort.h"

void print_array(int arr[], int n);

void bubble_sort(int arr[], int n){
    for (int i = n-1; i > 0; i--){
        for (int j = 1; j <= i; j++){
            if (arr[j-1] > arr[j]) {
                int t = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = t;
            }
        }
        print_array(arr, n);
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
