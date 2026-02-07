#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function     : Summation
// Description  : Accept No from user and sum all the numbers recursive
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
/////////////////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
    if(iNo == 0)              
    {
        return 0;
    }

    return (iNo % 10) + Summation(iNo / 10); 

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation of digits is : %d\n", iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Input : 897  Output : 24
//
/////////////////////////////////////////////////////////////////////////////
