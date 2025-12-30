#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Structure Defination
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2023
//
////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

////////////////////////////////////////////////////////////////////
//
// Function : InsertFirst
// Description  : To Insert Elememnt in Linked List
// Auther : Sanyam Bhupendrakumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////
//
// Function : Display
// Description  : To Display The Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : IsPrime
// Description : To Display prime From Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

int IsPrime(int no)
{
    int i = 0;

    if(no < 2)
    {
        return 0;
    }

    for(i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
        {
            return 0;
        }
    }
    return -1;
}

////////////////////////////////////////////////////////////////////
//
// Function : DisplayPrime
// Description : To Display prime From Linked List
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 30/12/2025
//
////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE head)
{
   printf("Prime Number in Linked List are : ");

   while(head != NULL)
   {
        if(IsPrime(head->data))
        {
            printf(" %d " , head->data);
        }
        head = head->next;
   }
   printf("\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : Main
// Auther   : Sanyam BhupendraKumar Ravne
// Date  : 30/12/2025
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 121);
    InsertFirst(&first, 111);
    InsertFirst(&first, 101);
    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);

    printf("\n---- Display Prime Numbers ----\n");
    DisplayPrime(first);

    return 0;
}
/*
| 11 |->| 21 |->| 51 |->| 101 |->| 111 |->| 121 |->NULL

---- Display Prime Numbers ----
Prime Number in Linked List are :  11  101
*/