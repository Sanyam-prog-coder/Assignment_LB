#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function     : CheckZero
// Description  : Accept No. from user & check it contains 0 or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 02/11/2025
//
/////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)     
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        if(iDigit == 0)     
        {
            return TRUE;
        }
        iNo = iNo / 10;      
    }
    return FALSE;
}

int main()
{ 
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contain zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////
//
// Input : 16750    Output : It contains zero
// Input : 19546    Output : There is No zero
// Input : -1540    Output : It contains zero
// Input : -1645    Output : There is No zero
//
/////////////////////////////////////////////////////////////////////////////    