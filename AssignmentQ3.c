#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Structure Defination
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2023
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
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void InsetFirst(PPNODE head,int no)
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
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : CheckSorted
// Description  : Cheched sorted Linked List 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

bool CheckSorted(PNODE head)
{
    if(head == NULL || head->next == NULL)
    {
        return true;
    }

    while(head->next != NULL)
    {
        if(head->data > head->next->data)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}

////////////////////////////////////////////////////////////////////
//
// Function : Main
// Auther   : Sanyam BhupendraKumar Ravne
// Date  : 31/12/2025
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;
    bool bRet = false;

    InsetFirst(&first, 11);
    InsetFirst(&first, 25);
    InsetFirst(&first, 54);
    InsetFirst(&first, 25);
    InsetFirst(&first, 65);

    Display(first);

    bRet = CheckSorted(first);

    if(bRet == true)
    {
       printf("\nThe list is sorted in ascending order.\n");
    }
    else
    {
        printf("\nThe list is NOT sorted in ascending order.\n");
    }

    return 0;
}
/*
| 65 |->| 25 |->| 54 |->| 25 |->| 11 |->NULL
The list is NOT sorted in ascending order.
*/