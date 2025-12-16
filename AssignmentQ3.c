#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : InsertFirst, AdditionEven, Display, count
// Description  : Display the Addition of Even Number of particular element from Singly Linear Linked List
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
int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if(Head ->Data % 2 == 0)
        {
            iSum += Head ->Data;
        }
        Head = Head ->Next;
    }
    return iSum;
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

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);
    // iRet = Count(First);
    // printf("Number of nodes are : %d\n",iRet);

    iRet = AdditionEven(First);
    printf("The Addition of Even Number in Linked List : %d\n", iRet);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output   : | 11 |->| 20 |->| 32 |->| 41 |->NULL
//              The Addition of Even Number in Linked List : 52
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////