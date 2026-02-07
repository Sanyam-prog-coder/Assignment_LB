#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Fact
// Description  : Accept No. From user and return its factorial Recursive
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
////////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iFact = 1;
    
    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d\n",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
//
// Input : 5    Output : 120
//
////////////////////////////////////////////////////////////////////////////////////