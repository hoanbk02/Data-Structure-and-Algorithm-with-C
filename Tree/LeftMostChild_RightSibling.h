//
//  LeftMostChild_RightSibling.h
//  DataStructure-Algorithm
//
//  Created by Pham Hoan on 09/12/2021.
//

#ifndef LeftMostChild_RightSibling_h
#define LeftMostChild_RightSibling_h

#include <stdio.h>

struct Node
{
    int data;
    struct Node * leftmost_child;
    struct Node * right_sibling;
};
typedef struct Node treeNode;

treeNode * make_treeNode(int);
void preOrder(treeNode *);
void inOrder(treeNode *);
void postOrder(treeNode *);

#endif /* LeftMostChild_RightSibling_h */
