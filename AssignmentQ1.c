#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : InsertFirst, DisplayPerfect, Display, count
// Description  : Display the Perdect Number of particular element from Singly Linear Linked List
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
int DisplayPerfect(PNODE Head)
{
    int iCnt = 0;
    int i = 0;

    while(Head != NULL)
    {
        int iNo = Head ->Data;
        int iSum = 0;

        for(i = 1; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == iNo)
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
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);
    // iRet = Count(First);
    // printf("Number of nodes are : %d\n",iRet);

    iRet = DisplayPerfect(First);
    printf("The Perfect Number in Linked List : %d\n", iRet);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Output   : | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL
//              28      6
//             The Perfect Number in Linked List : 2
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////