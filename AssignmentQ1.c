#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : Pattern
// Description  : Accept number from user and Display ballo pattern
//                A  B   C   D   E
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 21/11/2025
//
/////////////////////////////////////////////////////////////////////

void pattern(int iNo)
{
    char Cnt = 'A';

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",Cnt);
        Cnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number of Elements : ");
    scanf("%d", &iValue);

    pattern(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////
//
// Input : 5    Output : A  B   C   D   E
//
/////////////////////////////////////////////////////////////////////