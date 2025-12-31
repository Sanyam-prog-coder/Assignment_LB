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
// Function : CountTwoDigit
// Description  : Count two Digit Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

int CountTwoDigit(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        if((head->data >= 10 && head->data <= 99) ||
           (head->data <= -10 && head->data >= -99))
        {
            iCount++;
        }
        head = head->next;
    }
    return iCount;
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

    InsertFirst(&first, 99);
    InsertFirst(&first, 62);
    InsertFirst(&first, 81);
    InsertFirst(&first, 336);
    InsertFirst(&first, 25);
    InsertFirst(&first, 11);

    Display(first);
    
    iRet = CountTwoDigit(first);
    printf("Count Two Digit Are : %d",iRet);

    return 0;
}
/*
| 11 |->| 25 |->| 336 |->| 81 |->| 62 |->| 99 |->NULL
Count Two Digit Are : 5
*/