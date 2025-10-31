#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
// Function     : TableRev
// Description  : Complexity Calculation Display Table from User
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2025
/////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt = 10; icnt >= 1; icnt--)
    {
        printf("%d\t",iNo * icnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
// Input    : 8
// Output   : 80 72 64 56 48 40 32 24 16 8
// Input    : -8
// Output   : 80 72 64 56 48 40 32 24 16 8
// Input    : 5
// Output   : 50 45 40 35 30 25 20 15 10 5
/////////////////////////////////////////////////////////////////////////