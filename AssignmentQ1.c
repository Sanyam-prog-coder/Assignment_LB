#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function     : Pattern
// Description  : Accept No. from user & print $ & *
// Auther       : Sanyam Bhupendrakumar Ravne
// Date         : 31/10/2025
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int icnt = 0;

    iNo = -iNo;

    for(icnt = 1; icnt<= iNo; icnt++)
    {
        printf("$\t*\t",icnt);
    }
}

int main()
{
    int iValue = 0;
 
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////
// Input : 5    Output : $ * $ * $ * $ * $ * 
// Input : -3   Output : $ * $ * $ * 
///////////////////////////////////////////////////////////////