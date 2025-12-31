#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Structure Defination
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2023
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
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void InsetFirst(PPNODE head,int no)
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
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : DisplayGraaterThanAvg
// Description  : Display the Greater Avarage Linked LIst
// Auther   : Sanyam BhupendraKumar Ravne
// Date : 31/12/2025
//
////////////////////////////////////////////////////////////////////

void DisplayGraaterThanAvg(PNODE head)
{
   PNODE temp = head;
   int iSum = 0, iCount = 0;
   float avg = 0.0f;

   while(temp != NULL)
   {
        iSum += temp->data;
        iCount++;
        temp = temp->next;
   }

   avg = (float)iSum / iCount;

   temp = head;
   printf("Elements greater than average(%2f):\n",avg);

   while(temp != NULL)
   {
        if(temp->data > avg)
        {
            printf("%d ", temp->data);
        }
        temp = temp->next;
   }
   printf("NULL\n");
}

////////////////////////////////////////////////////////////////////
//
// Function : Main
// Auther   : Sanyam BhupendraKumar Ravne
// Date  : 31/12/2025
//
////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;

    InsetFirst(&first, 11);
    InsetFirst(&first, 25);
    InsetFirst(&first, 54);
    InsetFirst(&first, 25);
    InsetFirst(&first, 65);

    Display(first);

    DisplayGraaterThanAvg(first);

    return 0;
}
/*
| 65 |->| 25 |->| 54 |->| 25 |->| 11 |->NULL

Elements greater than average(36.000000):

65 54 NULL
*/