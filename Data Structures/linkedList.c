/*
This program is an implementation of Linked List data structure in C language.
 
Linked List: It is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence.

Although linked list takes twice the memory size of an array, it has much faster execution time for larger lists and it is much easier to add new nodes in the list when compared to arrays.
*/


#include <stdio.h>
#include <stdlib.h>

//This create a node in the linked list.
typedef struct node
{
    int n; //The value stored in the node.
    struct node *next; //Address of the next node.
} node;

// print the linked list value. This function came from this website: https://www.programiz.com/dsa/linked-list
void printLinkedlist(node *p) {
  while (p != NULL) {
    printf("%d ", p -> n);
    p = p->next;
  }
}

int main(int argc, char* argv[]) //The char* makes argv a string array instead of a character array.
{
    //Initializing the nodes.
    node *head = NULL;
    node *one = NULL;
    node *two = NULL; 
    node *three = NULL;

    //Allocating the memory to the nodes.
    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    three = malloc(sizeof(node));

    // Storing value in the node. The -> sign represent: *(one).n this operation in a more pictoral form. It gives instructions to the compiler to go node, dereference its value and get into the variable in the node.
    one -> n = 1;
    two -> n = 2;
    three -> n = 3;

    //Linking the nodes.
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    //saving the address of the first node in the head. This can be used for printing the Linked List.
    head = one;

    printLinkedlist(head);
}