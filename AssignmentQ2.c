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
// Function : CountDigit
// Description : To Count Digits From Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void CountDigit(PNODE head)
{
    int iNo = 0;
    int iCount = 0;
    
    while(head != NULL)
    {
        iNo = head->data;
        iCount = 0;

        if(iNo == 0)
        {
            iCount = 1;
        }
        else
        {
            while(iNo != 0)
            {
                iCount++;
                iNo = iNo / 10;
            }
        }
        printf("%d -> %d Digits\n ",head->data,iCount);
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

    CountDigit(first);

    return 0;
}
/*

| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL
11 -> 2 Digits
21 -> 2 Digits
51 -> 2 Digits
101 -> 3 Digits
111 -> 3 Digits
121 -> 3 Digits
*/