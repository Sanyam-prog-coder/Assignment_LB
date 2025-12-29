#include<stdio.h>
#include<stdlib.h>

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
// Function : DisplayEven
// Description  : To Count the Even Element from Given Linked list
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////

void DisplayEven(PNODE head)
{
    while(head != NULL)
    {
        if((head->data % 2) == 0)
        {
            printf("%d\t", head->data);
        }
        head = head->next;
    }
    printf("\n");
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
    InsertFirst(&first, 44);
    InsertFirst(&first, 38);
    InsertFirst(&first, 29);
    InsertFirst(&first, 2);

    printf("Even Elements : ");
    DisplayEven(first);

    return 0;
}
/*
    Output : 2  38  44    
*/