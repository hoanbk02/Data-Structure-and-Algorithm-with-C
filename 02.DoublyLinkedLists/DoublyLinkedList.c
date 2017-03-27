//
//  DoublyLinkedList.c
//  02.DoublyLinkedLists
//
//  Created by mixmex on 3/12/17.
//  Copyright © 2017 mixmex. All rights reserved.
//

#include "DoublyLinkedList.h"

int list_length(DLLNode *head){
    DLLNode *currNode = head;
    int count = 0;
    
    while (currNode != NULL) {
        count++;
        currNode = currNode->next;
    }
    
    return count;
}

void traversing_list(DLLNode *head){
    DLLNode *currNode = head;
    int position = 1;
    
    if (head == NULL) {
        printf("DLL is Empty\n");
    }else{
        printf("Traversing Doubly Linked List\n");
        while (currNode != NULL) {
            printf("Node %d: %d \n", position, currNode->data);
            position++;
            currNode = currNode->next;
        }
    }
}

DLLNode *insert_in_list(DLLNode *head, int data, int position){
    if (position > list_length(head) + 1) {
        printf("Position > Length of List \n");
    } else {
        int k = 1;
        DLLNode *temp, *newNode;
        newNode = (DLLNode *) malloc(sizeof(DLLNode));
        
        if (newNode == NULL) {
            printf("Memory error");
        }else{
            newNode->data = data;
            if (position == 1) {
                newNode->next = head;
                newNode->prev = NULL;
                if (head != NULL) {
                    head->prev = newNode;
                }
                head = newNode;
            }else{
                temp = head;
                while ((k < position) && (temp->next != NULL)) {
                    temp = temp->next;
                    k++;
                }
                if (temp->next == NULL) {
                    newNode->next = temp->next;
                    newNode->prev = temp;
                    temp->next = newNode;
                } else {
                    newNode->next = temp->next;
                    newNode->prev = temp;
                    temp->next->prev = newNode;
                    temp->next = newNode;
                }
            }
        }
    }
    return head;
}

DLLNode *create_random_list(int number_node){
    DLLNode *head = NULL;
    int i = 1;
    
    while (i <= number_node) {
        head = insert_in_list(head, rand(), i);
        i++;
    }
    
    return head;
}

DLLNode *delete_from_list(DLLNode *head, int position){
    DLLNode *temp1 = head, *temp2;
    int k = 1;
    if (head == NULL) {
        printf("List is Empty \n");
    }else{
        if (position == 1) {
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            free(temp1);
        }else{
            while ((k < position) && (temp1->next != NULL)) {
                temp1 = temp1->next;
                k++;
            }
            if (temp1->next == NULL) {
                temp2 = temp1->prev;
                temp2->next = NULL;
                free(temp1);
            }else{
                temp2 = temp1->prev;
                temp2->next = temp1->next;
                temp1->next->prev = temp2;
                free(temp1);
            }
        }
    }
    return head;
}
