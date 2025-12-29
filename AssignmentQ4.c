#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
// Function : ReplaceNegative
// Description  : To Display Odd Element 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void ReplaceNegative(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->data < 0)
        {
            Head->data = 0;
        }
        Head = Head->next;
    }
}

//////////////////////////////////////////////////////////////////////////////
//
// Function : Display
// Description  : To Display Element 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf(" | %d |-> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
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
    InsertFirst(&first, -18);
    InsertFirst(&first, 15);
    InsertFirst(&first, -21);
    InsertFirst(&first, 11);
    
    ReplaceNegative(first);
    printf("After Replacing Negative Numbers:\n");
    Display(first);

    return 0;
}
/*
After Replacing Negative Numbers:
| 11 |->  | 0 |->  | 15 |->  | 0 |->  | 2 |->  | 12 |-> NULL
*/