#include<stdio.h>
#include<stdlib.h>

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
// Function : Difference
// Description  : To check Difference from Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

int Difference(PNODE head)
{
    int Max, Min;

    if(head == NULL)
    {
        return 0;
    }

    while(head != NULL)
    {
        if(head->data > Max)
        {
            Max = head->data;
        }

        if(head->data < Min)
        {
            Min = head->data;
        }
        head = head->next;
    }
    return Max - Min;
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
    int iRet = 0;

    InsertFirst(&first, 132);
    InsertFirst(&first, 98);
    InsertFirst(&first, 81);
    InsertFirst(&first, 36);
    InsertFirst(&first, 25);
    InsertFirst(&first, 11);

    Display(first);
    iRet = Difference(first);
    printf("Diffrence in Linked List Element Are : %d",iRet);

    return 0;
}
/*
Diffrence in Linked List Element Are : 121
*/