#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : InsertFirst, SecMaximum, Display, count
// Description  : Display the Second Maximum Number of particular element from Singly Linear Linked List
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 16/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int bool;

struct node
{
    int Data;
    struct node *Next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = no;
    newn -> Next = NULL;

    if(*Head == NULL)                              // Limked List is Empty
    {
        (*Head) = newn;
    }
    else                                            // Linked List  contains atleast 1 node
    {
        newn -> Next = (*Head);
        (*Head) = newn;
    }
}
int SecMaximum(PNODE Head)
{
    int iMax1 = -1, iMax2 = -1;

    while(Head != NULL)
    {
        if(Head ->Data > iMax1)
        {
            iMax2 = iMax1;
            iMax1 = Head ->Data;
        }
        else if(Head ->Data > iMax2 && Head ->Data != iMax1)
        {
            iMax2 = Head ->Data;
        }
        Head = Head ->Next;
    }
    return iMax2;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first -> Data);
        first = first -> Next;
    }
    printf("NULL \n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> Next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);
    // iRet = Count(First);
    // printf("Number of nodes are : %d\n",iRet);

    iRet = SecMaximum(First);
    printf("The Second Maximum Number in Linked List : %d\n", iRet);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output   : | 110 |->| 230 |->| 320 |->| 240 |->NULL
//              The Second Maximum Number in Linked List : 240
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////