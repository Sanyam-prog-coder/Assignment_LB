#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : InsertFirst, DisplayPrime, Display, count
// Description  : Display the Prime of particular element from Singly Linear Linked List
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
int DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    int i = 0;

    while(Head != NULL)
    {
        int iNo = Head ->Data;
        int flag = 1;

        if(iNo < 2)
        flag = 0;

        for(i = 2; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d\t", iNo);
            iCnt++;
        }
        Head = Head ->Next;
    }
    printf("\n");
    return iCnt;
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

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);
    // iRet = Count(First);
    // printf("Number of nodes are : %d\n",iRet);

    iRet = DisplayPrime(First);
    printf("The Prime Number in Linked List : %d\n", iRet);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output   : | 11 |->| 20 |->| 17 |->| 41 |->| 22 |->| 89 |->NULL
//              11      17      41      89
//              The Prime Number in Linked List : 4
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////