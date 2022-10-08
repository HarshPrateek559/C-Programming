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

void print(node *n);

int main(void)
{

// Head:
    //making the head of the linked list. This will be the starting point of the linked list.
    node *list = NULL;

// First Node:   
    //making the first node.
    node *one = malloc(sizeof(node));

    if (one == NULL)
    {
        //checking whether node one has got the memory correctly or not.
        printf("error!");
        return 1;
    }

    // Store the address of the first node in the head of the list.
    list = one;


    //setting the value of the first node.
    one -> n = 1;

    //printf("%i\n", list -> n); - since at this point, list is pointing to the same memory location as one, therefore the value which is stored in one can also be accessed with list. Although the same cannot be done with the others.

//Second node: 
    //making the second node.
    node *two = malloc(sizeof(node));

    if (two == NULL)
    {
        printf("error!");
        return 1;
    }

    //connecting the second node to the list.
    one -> next = two;

    //setting the value of the second node.
    two -> n = 2;

//Third node: 
    //making the third node.
    node *three = malloc(sizeof(node));
    if (three == NULL)
    {
        printf("error!");
        return 1;
    }

    //connecting the third node to the list.
    two -> next = three;

    //setting the value of the node.
    three -> n = 3;
    
    //setting the next argument of the last linked list node to be NULL

    three -> next = NULL;

    //Function used to print the linked list.
    print(list);

    return 0;
}

void print(node *list)
{
    // while(list != NULL)
    // { This is the implementation of linked list printing in while loop
    //     printf("%i\n", list -> n);
    //     list = list -> next;
    // }

    for (node *i = list; i != NULL; i = i -> next)
    {
        //This is the implementation of linked list printing in for loop
        printf("%i\n", i -> n);
    }
}

