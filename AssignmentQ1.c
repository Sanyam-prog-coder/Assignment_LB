#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : Print_number
// Description  : print all Number From 1 to N
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
//////////////////////////////////////////////////////////////////////////

void Print_number(int limit)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int limit;

    printf("Enter number :");
    scanf("%d",&limit);

    Print_number(limit);

    return 0;
}
//////////////////////////////////////////////////////////////////////////
//
// Input : 12   Output : 1 2 3 4 5 6 7 8 9 10 11 12
//
//////////////////////////////////////////////////////////////////////////