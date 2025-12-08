#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Display the pattern by Recurtion
// Auther       : Sanyam Bhupendrakumar Ravne
// Date         : 06/12/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt = 1;
    auto int i = 1;

    if( iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        i++;
        Display(iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////
//
// Input : 5    Output : *  *   *   *   *
//
/////////////////////////////////////////////////////////////////