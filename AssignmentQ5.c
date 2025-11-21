#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : Pattern
// Desscription : Accept Number from user and display below pattern
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
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
// Input : 8   Output :2    4   6   8   10  12  14  16
//
/////////////////////////////////////////////////////////////////////