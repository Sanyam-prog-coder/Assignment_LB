#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
// Function     : DisplayDigit
// description  : Accept No. from User & display its Digit in reverse order
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////
//
// Input : 8945 Output : 5  4   9   8
// Input : -465 Output : 5  6   4
//
///////////////////////////////////////////////////////////////////////////////