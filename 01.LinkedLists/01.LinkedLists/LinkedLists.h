//
//  LinkedLists.h
//  01.LinkedLists
//
//  Created by mixmex on 3/11/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#ifndef LinkedLists_h
#define LinkedLists_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node * next;
} ListNode;

ListNode * create_random_list(int);
void traversing_list(ListNode *);
int list_length(ListNode *);
ListNode * insert_in_list(ListNode *, int, int);
int delete_from_list(ListNode *, int);
void delete_list(ListNode *);

#endif /* LinkedLists_h */
