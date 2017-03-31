//
//  main.c
//  03.CircularLinkedLists
//
//  Created by mixmex on 3/27/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#include <stdio.h>
#include "CircularLinkedLists.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World! This is Demonstration Programming\n");
    
    CLLNode *head;
    
    head = insert_at_end_in_CLL(head, 5);
    head = insert_at_begin_in_CLL(head, 0);
    head = insert_at_begin_in_CLL(head, 1);
    head = insert_at_begin_in_CLL(head, 2);
    head = insert_at_end_in_CLL(head, 3);
    head = insert_at_begin_in_CLL(head, 4);
    
    print_circular_list(head);
    
    head = delete_first_node_from_CLL(head);
    head = delete_last_node_from_CLL(head);
    
    print_circular_list(head);
    
    
    return 0;
}
