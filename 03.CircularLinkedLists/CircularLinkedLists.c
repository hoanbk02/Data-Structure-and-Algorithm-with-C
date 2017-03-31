//
//  CircularLinkedLists.c
//  03.CircularLinkedLists
//
//  Created by mixmex on 3/27/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#include "CircularLinkedLists.h"

int circular_list_length(CLLNode *head){
    CLLNode *current = head;
    int count = 0;
    if (head != NULL) {
        do {
            current = current->next;
            count++;
        } while (current != head);
    }
    return count;
}

void print_circular_list(CLLNode *head){
    CLLNode *current = head;
    if (head != NULL) {
        do {
            printf("%d \t",current->data);
            current = current->next;
        } while (current != head);
    }else{
        printf("Circular Lists is Empty\n");
    }
}

CLLNode *insert_at_end_in_CLL(CLLNode *head, int data){
    CLLNode *current = head;
    CLLNode *newNode = (CLLNode *) malloc(sizeof(CLLNode));
    if (newNode == NULL) {
        printf("Memory Error\n");
    }else{
        newNode->data = data;
        newNode->next = newNode;
        if (head == NULL) {
            head = newNode;
        }else{
            while (current->next != head) {
                current = current->next;
            }
            newNode->next = head;
            current->next = newNode;
        }
    }
    return head;
}

CLLNode *insert_at_begin_in_CLL(CLLNode *head, int data){
    CLLNode *current = head;
    CLLNode *newNode = (CLLNode *) malloc(sizeof(CLLNode));
    if (newNode == NULL) {
        printf("Memory Error\n");
    }else{
        newNode->data = data;
        newNode->next = newNode;
        if (head == NULL) {
            head = newNode;
        }else{
            while (current->next != head) {
                current = current->next;
            }
            newNode->next = head;
            current->next = newNode;
            head = newNode;
        }
    }
    return head;
}

CLLNode *delete_last_node_from_CLL(CLLNode *head){
    CLLNode *temp = head;
    CLLNode *current = head;
    if (head == NULL) {
        printf("List is Empty\n");
    }else{
        while (current->next != head) {
            temp = current;
            current = current->next;
        }
        temp->next = head;
        free(current);
    }
    return head;
}

CLLNode *delete_first_node_from_CLL(CLLNode *head){
    CLLNode *temp = head;
    CLLNode *current = head;
    if (head == NULL) {
        printf("List is Empty\n");
    }else{
        while (current->next != head) {
            current = current->next;
        }
        current->next = head->next;
        head = head->next;
        free(temp);
    }
    return head;
}

