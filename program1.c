#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Display Pattern in Recursive 
// Auther       ; Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
/////////////////////////////////////////////////////////////////

void Display(int iNO)
{
    if(iNO > 0)
    {
        printf("%d\t*\t",iNO);
        iNO--;
        Display(iNO);
    }    
}

int main()
{
    int No = 0;

    printf("Enter Number : ");
    scanf("%d",&No);

    Display(No);

    return 0;
}
/////////////////////////////////////////////////////////////////
//
// Input : 5    Output : 5  *   4   *   3   *   2   *   1   *
//
/////////////////////////////////////////////////////////////////