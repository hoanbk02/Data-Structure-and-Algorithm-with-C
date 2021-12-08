//
//  main.c
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 10/10/2021.
//

#include <stdio.h>
#include "../SortAlgorithm/BubbleSort.h"
#include "../BinarySearch/BinarySearch.h"
#include "../SortAlgorithm/MergeSort.h"
#include "../BackTracking/Queen.h"
#include "../Tree/LeftMostChild_RightSibling.h"


int main(int argc, const char * argv[]) {
//    int n = 10;
//    int input[10] = {3, 5, 2, 7, 1, 0, 4, 8, 9, 6};
//
//    bubble_sort(input, n);
//
//    printf("kết quả: ");
//    for (int i = 0; i < n; i++){
//        printf("%d ", input[i]);
//    }
    
//    int a[10] = {0, 1, 3, 5, 7, 9, 10, 11, 15, 17};
//    int index = binary_search(a, 0, 9, 10);
//    printf("Index: %d\n", index);
    
//    int n;
//    printf("Input n = "); scanf("%d", &n);
//    queen(1, n);
    
    treeNode * root = make_treeNode(0);
    treeNode * b = make_treeNode(1);
    treeNode * c = make_treeNode(2);
    treeNode * d = make_treeNode(3);
    treeNode * e = make_treeNode(4);
    treeNode * f = make_treeNode(5);
    treeNode * g = make_treeNode(6);
    treeNode * h = make_treeNode(7);
    treeNode * i = make_treeNode(8);
    treeNode * j = make_treeNode(9);
    treeNode * k = make_treeNode(10);

    root->leftmost_child = b;
    b->right_sibling = c;
    b->leftmost_child = e;
    e->right_sibling = f;
    c->leftmost_child = g;
    c->right_sibling = d;
    g->leftmost_child = h;
    h->right_sibling = i;
    i->right_sibling = j;
    j->right_sibling = k;
    
    
    printf("Pre Order\n");
    preOrder(root);
    printf("In Order\n");
    inOrder(root);
    printf("Post Order\n");
    postOrder(root);
    
    return 0;
}
