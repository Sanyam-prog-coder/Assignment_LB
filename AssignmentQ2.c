#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function     : Display
// Description  : Accept No. from user & print No. till that
// Auther       : Sanyam Bhupendrakumar Ravne
// Date         : 31/10/2025
///////////////////////////////////////////////////////////////

void Dispaly(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
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
// Input : 8    Output : 1 2 3 4 5 6 7 8
///////////////////////////////////////////////////////////////