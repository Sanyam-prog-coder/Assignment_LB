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
// Function : DisplayDivisibleBy3
// Description  : Display Divisible By Three Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void DisplayDivisibleBY3(PNODE head)
{
    while(head != NULL)
    {
        if(head->data % 3 == 0)
        {
            printf("%d ",head->data);
        }
        head = head->next;
    }
    printf("\n");
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

    InsertFirst(&first, 132);
    InsertFirst(&first, 98);
    InsertFirst(&first, 81);
    InsertFirst(&first, 36);
    InsertFirst(&first, 25);
    InsertFirst(&first, 11);

    Display(first);
    
    DisplayDivisibleBY3(first);

    return 0;
}
/*
Divisible By 3 are : 36 81 132
*/