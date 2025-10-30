#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
// Function     : ChechGreater
// Description  : Accept one No. and check that No. is grater or not
// Auther       : Sanyam BhupendraKumar Ravne 
// Date         : 30/10/2025
/////////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return false ;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == false)
    {
        printf("Greter...");
    }
    else
    {
        printf("Smaller...");
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////
// Input : 101  Output : Greater
// Input : 50   Output : Smaller
// Input : 100  Output : Smaller
/////////////////////////////////////////////////////////////////////////
