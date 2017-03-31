//
//  CircularLinkedLists.h
//  03.CircularLinkedLists
//
//  Created by mixmex on 3/27/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#ifndef CircularLinkedLists_h
#define CircularLinkedLists_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}CLLNode;

int circular_list_Length(CLLNode *);
void print_circular_list(CLLNode *);
CLLNode *insert_at_end_in_CLL(CLLNode *, int);
CLLNode *insert_at_begin_in_CLL(CLLNode *, int);
CLLNode *delete_last_node_from_CLL(CLLNode *);
CLLNode *delete_first_node_from_CLL(CLLNode *);

#endif /* CircularLinkedLists_h */
