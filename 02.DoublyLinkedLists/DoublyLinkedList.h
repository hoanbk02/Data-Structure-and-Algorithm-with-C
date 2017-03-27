//
//  DoublyLinkedList.h
//  02.DoublyLinkedLists
//
//  Created by mixmex on 3/12/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
} DLLNode;

DLLNode * create_random_list(int);
int list_length(DLLNode *);
void traversing_list(DLLNode *);
DLLNode *insert_in_list(DLLNode *, int, int);
DLLNode *delete_from_list(DLLNode *, int);


#endif /* DoublyLinkedList_h */
