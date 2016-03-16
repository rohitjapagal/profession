/**
 * \file   linked-list.cpp
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   simple linked list programs.
 *
 * \details 
 *   linked list programs which contains creation, deletion, insertion, length,
 *   intersection, loop, length of loop.
 *
 * \note
 *   The notes for this file.
 *on
 * \copyright
 *   No part of this should be published in any form without the 
 *   author permission
 */
#include "../inc/linked-list.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
 /**
  * \struct node
  * \brief structure for linked list node
  * \details
  * linked list node contains data and the next pointer
  *
  * \var data 
  * This contains the data of each node in linked list 
  * \var next 
  * This points to next of current node in linked list
  */
struct node {
 int data;
 struct node *next;
};


/**
 * \fn    newNode
 * \brief   Allocate a new node.
 * \details 
 *   Allocates a new node for linked list and assigns the data passed to the
 *   created node.
 *
 * \param [in] data data to be assigned to created node
 *
 * \retval node   returns the created node.
 *
 */
struct node *newNode(int data) {
 struct node *Node;
 
 Node = (struct node *)malloc(sizeof(struct node));
 
 Node->data = data;
 Node->next = NULL;
 
 return Node;
}

/**
 * \fn    push
 * \brief   Insert node at the front of the list
 * \details 
 * 1. allocate node 
 * 2. put in the data  
 * 3. Make next of new node as head 
 * 4. move the head to point to the new node 
 *
 * \param [in] new_data data to be inserted at front node
 * \param [in] head_ref linked list head
 *
 * \retval void.
 *
 */
void push(struct node** head_ref, int new_data) {
    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
  
    /* 2. put in the data  */
    new_node->data  = new_data;
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
  
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;
}

/**
 * \fn    insertAfter
 * \brief   Given a node prev_node, insert a new node after the given
 *  prev_node
 * \details 
 * 1. check if the given prev node is NULL
 * 2. allocate node 
 * 3. put in the data  
 * 4. Make next of new node as next of prev node
 * 5. move the next of prev node as new node 
 *
 * \param [in] new_data data to be inserted after a node
 * \param [in] prev_node prev node where the new node inserted after
 *
 * \retval void.
 *
 */
void insertAfter(struct node* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL) 
    { 
       printf("the given previous node cannot be NULL");       
       return;  
    }  
          
    /* 2. allocate new node */
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
  
    /* 3. put in the data  */
    new_node->data  = new_data;
  
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next; 
  
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}

/**
 * \fn    insertAfter
 * \brief   Given a reference (pointer to pointer) to the head
 *  of a list and an int, appends a new node at the end
 * \details 
 * 1. allocate node 
 * 2. put in the data  
 * 3. This new node is going to be the last node, so make next 
 *    of it as NULL
 * 4. If the Linked List is empty, then make the new node as head
 * 5. Else traverse till the last node
 * 6. Change the next of last node 
 *
 * \param [in] new_data data to be inserted after a node
 * \param [in] head_ref head of the linked list
 *
 * \retval void.
 *
 */
void append(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
    struct node *last = *head_ref;  /* used in step 5*/
  
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next 
          of it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
      
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
  
    /* 6. Change the next of last node */
    last->next = new_node;
    return;    
}


/**
 * \fn    deleteList
 * \brief   delete the given linked list
 * \details 
 * \param [in] head head of the linked list
 *
 * \retval void 
 *
 */
void deleteList(struct node *head)
{
  struct node *temp = head;
  
  if(head == NULL)
    return;

  while(temp != NULL){

    head = head->next;
    free(temp);
    temp = head;

  }
}
/**
 * \fn    lengthLoop
 * \brief   gives the length of the loop in linked list
 * \details 
 * \param [in] head head of the linked list
 *
 * \retval -1   - linked list is null
 *          0   - no loop
 *          +ve - length of loop 
 *
 */
int lengthLoop(struct node *head) {

  struct node *slow = head;
  struct node *fast = head;
  int len = -1;
  
  if(head == NULL){
    /* linked list is empty */
    return len;
  }

  len = 0;

  while(fast !=NULL){
    
    slow = slow->next;
    fast = fast->next->next;
    
    if(slow == fast) {
      len = 2;
      do{
	
	slow = slow->next;
	fast = fast->next->next;
	len++;

      }while(slow == fast);

      /* loop detected*/
      return len;
    }

  }

  /* no loop so length is zero */ 
  return len;

}
/**
 * \fn    detectLoop
 * \brief   to detect loop in the linked list
 * \details 
 * \param [in] head head of the linked list
 *
 * \retval -1 - linked list is null
 *          0 - no loop detected
 *          1 - loop detected
 *
 */
int detectLoop(struct node *head) {

   struct node *fast = head;
   struct node *slow = head;

   if(head == NULL){
     /* linked list is empty */
     return -1;
   }

   while(fast !=NULL){

     slow = slow->next;
     fast = fast->next->next;

     if(slow == fast) {
       /* loop detected*/
       return 1;
     }

   }

   /* loop not detected*/
   return 0;
 }

/**
 * \fn    printList
 * \brief   prints contents of linked list starting from head
 * \details 
 * \param [in] head head of the linked list
 *
 * \retval void.
 *
 */
void printList(struct node *head) {
 if (head == NULL)
  return;
  
 printf("The List : ");
 while(head != NULL) {
  printf("%d\t",head->data);
  head = head->next;
 }
 printf("\n");
}
int main() {
 int choice;
 int ret = -1;
 char sub_choice;

 struct node *head = newNode(50);
 head->next = newNode(20);
 head->next->next = newNode(15);
 head->next->next->next = newNode(4);
 head->next->next->next->next = newNode(10);

 /* Create a loop for testing */
 //head->next->next->next->next->next = head->next->next;
 
 do {
  printf("\n\n\n *************** Enter your choice *****************\n\n\n");
  printf("0. Exit \n");
  printf("1. Insert a node.\n");
  printf("2. Delete a node. \n");
  printf("3. Length of the list. \n");
  printf("4. Get the nth node. \n");
  printf("5. Delete a list. \n");
  printf("6. Reverse a list. \n");
  printf("7. Detect a loop in the list. \n");
  printf("8. Print the list. \n"); 
  printf("9. List is palindrome ? \n");
  printf("10. Remove duplicate from list. \n");
  printf("11. Intersection point of two list. \n");
  printf("12. Merge two list. \n");
  printf("13. Union and Intersection of two lists. \n");
  printf("14. Rotate a list. \n");
  printf("15. Flattening a list. \n");
  printf("16. Length of the loop. \n");
  printf("17. position of start of loop. \n");
  scanf("%d",&choice);

  switch(choice) {
   /* Exit */
   case 0 :
     /* to free the memory deleting list before exit*/
     deleteList(head);
    break;

   /* Insert a node */
   case 1 :
    do {
     printf("a. Insert a node at start.\n");
     printf("b. Insert a node after. \n");
     printf("c. Insert a node at last. \n");
     scanf("%c",&sub_choice);
      switch(sub_choice){
       case 'a' :
                
       break;
       
       case 'b' :
       
       break;
       
       case 'c' :
       
       break;
       
       default :
       printf("Enter only the choice mention in the menu \n");
      }
    } while(sub_choice);
    break;

   /* Delete a node */
   case 2 :
    break;

   /* Length of the list */
   case 3 :
    break;
   
   /* Get the nth node */
   case 4 :
    break;
   
   /* Delete a list */
   case 5 :
    deleteList(head);
    break;
   
   /* Reverse a list */
   case 6 :
    break;
   
   /* Detect a loop in the list */
   case 7 :
    ret = detectLoop(head);
    if (ret == 1)
    {
      DEBUG_PRINT(("loop is detected in linked list"));      
    }
    else if(ret == 0)
    {
      DEBUG_PRINT(("loop is not detected in linked list"));      
    }
    else
    {
      DEBUG_PRINT(("linked list is empty"));      
    }
    break;
   
   /* Print the list */
   case 8 : 
   printList(head);
    break;

   /* List is palindrome ? */
   case 9 :
    break;

   /* Remove duplicate from the list */
   case 10 :
    break;

   /* Intersection point of two list */
   case 11 :
    break;

   /* Merge two list */
   case 12 :
    break;

   /* Union and Intersection of list */
   case 13 :
    break;

   /* Rotate a list */
   case 14 :
    break;

   /* Flattening a list */
   case 15 :
    break;

   /* length of the loop */
   case 16 :
    DEBUG_PRINT(("length of the loop : %d\n",lengthLoop(head)));
    break;
   /* */
   default :
    break;
  } 
 } while(choice !=0); 
 return 0;
}

