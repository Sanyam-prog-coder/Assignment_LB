#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : Pattern
// Desscription : Accept Number from user and display below pattern
//                  5 #   4   #   3   #   2   #   1   #
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0; iCnt--)
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
// Input : 5    Output : 5  #   4   #   3   #   2   #   1   #
//
/////////////////////////////////////////////////////////////////////