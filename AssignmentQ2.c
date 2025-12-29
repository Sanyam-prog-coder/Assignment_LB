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
// Function : CountEven
// Description  : To Count the Even Element from Given Linked list
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////

int CountEven(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        if((head->data % 2) == 0)
        {
            iCount++;
        }
        head = head->next;
    }
    return iCount;
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
    int iRet = 0;

    InsertFirst(&first, 51);
    InsertFirst(&first, 44);
    InsertFirst(&first, 38);
    InsertFirst(&first, 25);
    InsertFirst(&first, 11);

    iRet = CountEven(first);
    printf("Even Count from given Element : %d\n",iRet);

    return 0;
}
/*
    Output : 2    
*/