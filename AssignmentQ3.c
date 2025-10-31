#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function     : Display
// Description  : Accept No. from user & print its No. line
// Auther       : Sanyam Bhupendrakumar Ravne
// Date         : 31/10/2025
///////////////////////////////////////////////////////////////

void Dispaly(int iNo)
{
    int icnt = 0;

    for(icnt = -iNo; icnt <= iNo; icnt++)
    {
        printf("%d\t",icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////
// Input : 3    Output : -3 -2 -1 0 1 2 3
// Input : 5    Output : -5 -4 -3 -2 -1 0 1 2 3 4 5
///////////////////////////////////////////////////////////////