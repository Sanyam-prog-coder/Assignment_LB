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
// Function : ReplaceEven
// Description  : To Replace Even into 0 Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void ReplaceEven(PPNODE head)
{
    PNODE temp = *head;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            temp->data = 0;
        }
        temp = temp->next;
    }
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

    InsertFirst(&first, 36);
    InsertFirst(&first, 68);
    InsertFirst(&first, 41);
    InsertFirst(&first, 14);
    InsertFirst(&first, 61);
    InsertFirst(&first, 15);

    Display(first);

    ReplaceEven(&first);
    printf("\nAfter ReplaceEven:\n");
    Display(first);

    return 0;
}
/*
| 15 |->| 61 |->| 14 |->| 41 |->| 68 |->| 36 |->NULL

After ReplaceEven:
| 15 |->| 61 |->| 0 |->| 41 |->| 0 |->| 0 |->NULL
*/