#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
// Function : Structure
// Description  : To represent real world entity using Multi data field
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

#pragma pack(1)

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////////////////
//
// Function : InsertFirst
// Description  : To insert Entity in Linked List 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////
//
// Function : CountLess
// Description  : To Count lesser in Given Linked List 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

int CountGreater(PNODE head, int no)
{
    int iCount = 0;
     
    while(head != NULL)
    {
        if(head->data < no)
        {
            iCount++;
        }
        head = head->next;
    }
    return iCount;
}

//////////////////////////////////////////////////////////////////////////////
//
// Function : Main
// Auther   : Sanyam BhupendraKumar Ravne
// Date     : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 56);
    InsertFirst(&first, 11);
    InsertFirst(&first, 32);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);
    InsertFirst(&first, 06);

    iRet = CountGreater(first, 11);
    printf("Count Lesser than in Linked List : %d",iRet);
    
    return 0;
}
/*
    Output  : Count Lesser than in Linked List : 1
*/