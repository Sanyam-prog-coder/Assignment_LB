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
    if(iNo <= 0)
    {
        return; 
    }

    printf("%d\t", iNo);

    if(iNo > 1)
    {
        printf(" *\t ");
    }

    Display(iNo - 1);
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
// Input : 5    Output : 5  *   4   *   3   *   2   *   1   
//
/////////////////////////////////////////////////////////////////