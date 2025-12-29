#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
// Function : Structure
// Description  : To represent real world entity using Multi data field 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////////////
//
// Function : InsertFirst
// Description  : To insert Entity in Linked List 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////
//
// Function : SearchElement
// Description  : To search the Given Element Present or Not 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////

bool SearchElement(PNODE head, int no)
{
    while(head != NULL)
    {
        if(head->data == no)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

//////////////////////////////////////////////////////////////////////////
//
// Function : Main 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 51);
    InsertFirst(&first, 45);
    InsertFirst(&first, 39);
    InsertFirst(&first, 25);
    InsertFirst(&first, 11);

    printf("Search : %s\n", SearchElement(first, 11) ? "Found" : "Not Found");

    return 0;
}
/*
    Input : 11      Output : Found
    Input : 29      Output : Not Found      
*/