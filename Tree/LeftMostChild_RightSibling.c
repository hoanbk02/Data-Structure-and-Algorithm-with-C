//
//  LeftMostChild_RightSibling.c
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 09/12/2021.
//

#include <stdlib.h>
#include "LeftMostChild_RightSibling.h"

treeNode * make_treeNode(int d){
    treeNode * newNode = NULL;
    newNode = (treeNode*) malloc(sizeof(treeNode));
    newNode->data = d;
    newNode->leftmost_child = NULL;
    newNode->right_sibling = NULL;
    return newNode;
}

void preOrder(treeNode * nodeR){
    printf("%d\n", nodeR->data);
    if (nodeR->leftmost_child != NULL) {
        preOrder(nodeR->leftmost_child);
        treeNode * temp = nodeR->leftmost_child->right_sibling;
        while (temp != NULL){
            preOrder(temp);
            temp = temp->right_sibling;
        }
    }
}

void inOrder(treeNode * nodeR){
    if (nodeR->leftmost_child == NULL) {
        printf("%d\n", nodeR->data);
    } else {
        inOrder(nodeR->leftmost_child);
        printf("%d\n", nodeR->data);
        treeNode * temp = nodeR->leftmost_child->right_sibling;
        while (temp != NULL){
            inOrder(temp);
            temp = temp->right_sibling;
        }
    }
}

void postOrder(treeNode * nodeR){
    if (nodeR->leftmost_child != NULL) {
        postOrder(nodeR->leftmost_child);
        treeNode * temp = nodeR->leftmost_child->right_sibling;
        while (temp != NULL){
            postOrder(temp);
            temp = temp->right_sibling;
        }
    }
    printf("%d\n", nodeR->data);
}
