#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
// Function : Structure
// Description  : To represent real world entity using Multi data field
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////////////////
//
// Function : InsertFirst
// Description  : To insert Entity in Linked List 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////
//
// Function : DisplayGreater
// Description  : To Display Odd Element 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void DisplayGreater(PNODE Head, int no)
{
    while(Head != NULL)
    {
        if(Head->data > no)
        {
            printf("%d\t", Head->data);
        }
        Head = Head->next;
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////
//
// Function : Main
// Auther   : Sanyam BhupendraKumar Ravne
// Date     : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 12);
    InsertFirst(&first, 02);
    InsertFirst(&first, 18);
    InsertFirst(&first, 15);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    printf("Element Greater Than given number %d : ");
    DisplayGreater(first, 11);

    return 0;
}
/*
Element Greater Than given number 11 : 21       15      18      12
*/