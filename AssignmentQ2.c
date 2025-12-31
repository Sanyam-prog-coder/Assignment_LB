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
typedef struct node** PPNDOE;

////////////////////////////////////////////////////////////////////
//
// Function : InsertFirst
// Description  : To Insert Elememnt in Linked List
// Auther : Sanyam Bhupendrakumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void InsertFirst(PPNDOE head, int no)
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
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : CheckAllPositive
// Description  : Check All Positive Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

bool CheckAllPositive(PNODE head)
{
    while(head != NULL)
    {
        if(head->data <= 0)
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
    bool iRet = false;

    InsertFirst(&first, -132);
    InsertFirst(&first, 98);
    InsertFirst(&first, -81);
    InsertFirst(&first, -36);
    InsertFirst(&first, 25);
    InsertFirst(&first, 11);

    Display(first);
    iRet = CheckAllPositive(first);

    if(iRet == true)
    {
        printf("Result: All numbers in the Linked List are positive.\n");
    }
    else
    {
        printf("Result: The Linked List contains zero or negative numbers.\n");
    }
    return 0;
}
/*
Result: The Linked List contains zero or negative numbers
*/