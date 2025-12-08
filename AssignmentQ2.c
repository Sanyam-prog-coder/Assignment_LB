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

    if(iCnt > iNo)
    {
        return;
    }

    printf("%d\t",iCnt);
    iCnt++;

    Display(iNo);
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
// Input : 5    Output : 1  2   3   4   5
//
/////////////////////////////////////////////////////////////////