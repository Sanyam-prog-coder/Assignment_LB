#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : InsertFirst, SumDigit, Display, count
// Description  : Display the Summation of all Digit of particular element from Singly Linear Linked List
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
int SumDigit(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        int iNo = Head ->Data;
        int iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        printf("%d\t",iSum);
        iCnt++;

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

    
    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);
    // iRet = Count(First);
    // printf("Number of nodes are : %d\n",iRet);

    iRet = SumDigit(First);
    printf("The Sum of All Number in Linked List : %d\n", iRet);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output   : | 110 |->| 230 |->| 20 |->| 320 |->| 240 |->NULL
//              2       5       2       5       6
//              The Sum of All Number in Linked List : 5
//              
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////