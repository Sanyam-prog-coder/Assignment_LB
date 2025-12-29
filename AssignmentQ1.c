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

#pragma pack(1)

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
// Function : DisplayOdd
// Description  : To Display Odd Element 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void DisplayOdd(PNODE head)
{
    while(head != NULL)
    {
        if((head->data % 2) != 0)
        {
            printf("%d\t",head->data);
        }
        head = head->next;
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

    InsertFirst(&first, 56);
    InsertFirst(&first, 41);
    InsertFirst(&first, 32);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    InsertFirst(&first, 06);

    printf("Odd Elements : ");
    DisplayOdd(first);
    
    return 0;
}
/*
    Output  : 11    21    41
*/