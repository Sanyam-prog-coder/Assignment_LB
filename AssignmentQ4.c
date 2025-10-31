#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
// Function     : Table
// Description  : Complexity Calculation Display Table from User
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
/////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 1; icnt <= 10; icnt++)
    {
        printf("%d\t",iNo * icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
// Input    : 8
// Output   : 8 16  24  32  40  48  56  84  72  80
// Input    : -8
// Output   : 8 16  24  32  40  48  56  84  72  80
// Input    : 6
// Output   : 6 12  18  24  30  36  42  48  54  60
/////////////////////////////////////////////////////////////////////////