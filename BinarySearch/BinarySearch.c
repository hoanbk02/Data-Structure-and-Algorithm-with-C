//
//  BinarySearch.c
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 17/10/2021.
//

#include "BinarySearch.h"


int binary_search(int *a, int start, int finish, int x) {
    int middle = (start + finish)/2;
    if (start == finish) {
        if (a[middle] == x) {
            return middle;
        } else {
            return -1;
        }
    }
    if (a[middle] == x) {
        return middle;
    } else if (a[middle] > x) {
        return binary_search(a, start, middle-1, x);
    } else {
        return binary_search(a, middle+1, finish, x);
    }
}
