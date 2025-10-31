#include<stdio.h>

//////////////////////////////////////////////////////////////////
// Function     : Display
// Description  : Cal Complexity Display Pattern
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
//////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*\t");
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//////////////////////////////////////////////////////////////////
// Input : 5    Output : * * * * * # # # # #
//////////////////////////////////////////////////////////////////