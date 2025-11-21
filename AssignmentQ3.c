#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : Pattern
// Desscription : Accept Number from user and display below pattern
//                  1   *   2   *   3   *   4   *   5   *
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////
// 
// Input : 5    Output : 1   *   2   *   3   *   4   *   5   *
//
/////////////////////////////////////////////////////////////////////