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
// Function : SumDigit
// Description : To Count Digits From Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void SumDigit(PNODE head)
{
    int iNo = 0, iSum = 0;
    
    while(head != NULL)
    {
        iNo = head->data;
        iSum= 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        printf("Sum of Digits of %d is %d \n",head->data,iSum);
        head = head->next;
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

    InsertFirst(&first, 121);
    InsertFirst(&first, 111);
    InsertFirst(&first, 101);
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);

    SumDigit(first);

    return 0;
}
/*
| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL
Sum of Digits of 11 is 2
Sum of Digits of 21 is 3
Sum of Digits of 51 is 6
Sum of Digits of 101 is 2
Sum of Digits of 111 is 3
Sum of Digits of 121 is 4
*/