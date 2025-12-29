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
// Function : FirstOccur
// Description  : To Display FIrst Occurance Element 
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 29/12/2025
//
//////////////////////////////////////////////////////////////////////////////

int FirstOccur(PNODE head, int no)
{
    int pos = 1;
     
    while(head != NULL)
    {
        if(head->data == no)
        {
            return pos;
        }
        head = head->next;
        pos++;
    }
    return -1;
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

    iRet = FirstOccur(first, 06);
    printf("First Occurance in Linked List : %d",iRet);
    
    return 0;
}
/*
    Output  : First Occurance in Linked List : 1
*/