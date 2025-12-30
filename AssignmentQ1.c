#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Structure Defination
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2023
//
////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

////////////////////////////////////////////////////////////////////
//
// Function : InsertFirst
// Description  : To Insert Elememnt in Linked List
// Auther : Sanyam Bhupendrakumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

////////////////////////////////////////////////////////////////////
//
// Function : Display
// Description  : To Display The Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : DisplayReverse
// Description : To display Linked List In Reverse
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void DisplayReverse(PNODE head)
{
    if(head == NULL)
    {
        return;
    }
    DisplayReverse(head->next);
    printf("| %d |->",head->data);
}

////////////////////////////////////////////////////////////////////
//
// Function : Main
// Auther   : Sanyam BhupendraKumar Ravne
// Date  : 30/12/2025
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 121);
    InsertFirst(&first, 111);
    InsertFirst(&first, 101);
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);

    printf("Reverse of Linked List is : ");
    DisplayReverse(first);

    return 0;
}
/*

| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL
Reverse of Linked List is : | 121 |->| 111 |->| 101 |->| 51 |->| 21 |->| 11 |->

*/