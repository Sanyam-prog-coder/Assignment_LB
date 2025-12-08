#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
// Function     : Sum
// Description  : Accept Number from user and Summation  of All
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 08/12/2025
//
///////////////////////////////////////////////////////////////////////

int Sum( int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }

    return(iNo % 10) + Sum(iNo / 10);
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////
//
// Input : 879      Output : 24
//
///////////////////////////////////////////////////////////////////////