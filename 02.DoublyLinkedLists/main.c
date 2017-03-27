//
//  main.c
//  02.DoublyLinkedLists
//
//  Created by mixmex on 3/12/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#include <stdio.h>
#include "DoublyLinkedList.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, This is Demontration Program\n");
    
    DLLNode *head = create_random_list(10);
    traversing_list(head);
    
    head = delete_from_list(head, 5);
    traversing_list(head);
    
    return 0;
}
