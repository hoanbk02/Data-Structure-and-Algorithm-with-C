//
//  LinkedLists.c
//  01.LinkedLists
//
//  Created by mixmex on 3/11/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#include <time.h>
#include "LinkedLists.h"

// Function traversing_list
// Input: Head Node of List
// Output: void
void traversing_list(ListNode * head){
    ListNode *currNode = head;
    int position = 1;
    while (currNode != NULL) {
        printf("Node %d: %d \n", position, currNode->data);
        position++;
        currNode = currNode->next;
    }
}


// Function list_length
// Input: Head Node of List
// Output: Length of List
int list_length(ListNode *head){
    int count = 0;
    
    ListNode *current = head;
    while (current != NULL) {
        count++;
        current = current -> next;
    }
    
    return count;
}

// Function insert_in_list
// Input: Head Node of list, Data and where it insert
// Output: 1 -> Success, 0 -> Fail
ListNode * insert_in_list(ListNode *head, int data, int position){
    if (position > list_length(head) + 1) {
        printf("Position > Length of List\n");
    }else{
        int k = 1;
        ListNode *p, *q = NULL, *newNode;
        newNode = (ListNode *) malloc(sizeof(ListNode));
        
        if (newNode == NULL) {
            printf("Memory Error");
        }else{
            newNode->data = data;
            p = head;
            if (position == 1) {
                newNode->next = p;
                head = newNode;
            }else{
                while ((p != NULL) && (k < position)) {
                    k++;
                    q = p;
                    p = p->next;
                }
                if (p == NULL) {
                    q->next = newNode;
                    newNode->next = NULL;
                }else{
                    q->next = newNode;
                    newNode->next = p;
                }
            }
        }
    }
    return head;
}

// Function create_random_list
// Input: Number node in list
// Output: Head Node of list
ListNode * create_random_list(int number_node){
    ListNode *head = NULL;
    int i = 1;
    
    while (i <= number_node) {
        int data = rand()%1000;
        head = insert_in_list(head, data, i);
        i++;
    }
    
    return head;
}


// Function delete_from_list
// Input: Head Node of list, where of node is deleted
// Output: 1 -> Success, 0 -> Fail
int delete_from_list(ListNode *head, int position){
    int k = 1;
    ListNode *p, *q = NULL;
    
    if (head == NULL) {
        printf("List Empty");
        return 0;
    }
    
    p = head;
    if (position == 1) {
        p = head;
        head = head->next;
        free(p);
    }else{
        while ((p != NULL) && (k < position - 1)) {
            k++; q = p;
            p = p->next;
        }
        if (p == NULL) {
            printf("Position does not exist.");
            return 0;
        }else{
            q->next = p->next;
            free(p);
        }
    }
    return 1;
}


// Function delete_list
// Input: Head Node of list
// Ouput: void
void delete_list(ListNode *head){
    ListNode *auxilaryNode, *iterator;
    iterator = head;
    while (iterator) {
        auxilaryNode = iterator->next;
        free(iterator);
        iterator = auxilaryNode;
    }
    head = NULL;
}

