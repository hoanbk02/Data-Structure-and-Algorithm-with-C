//
//  main.c
//  01.LinkedLists
//
//  Created by mixmex on 3/11/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#include <stdio.h>
#include "LinkedLists.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, This is Demontration Program with Linked List\n");
    
    ListNode *head = create_random_list(5);
    traversing_list(head);
    
    return 0;
}
