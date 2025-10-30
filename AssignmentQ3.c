#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////
// Function     : CheckEqual
// Description  : Accept one No. and check that No. is grater or not
// Auther       : Sanyam BhupendraKumar Ravne 
// Date         : 30/10/2025
/////////////////////////////////////////////////////////////////////////

bool CheckEqual(int a,int b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    bool bRet = false;

    printf("Please Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Please Enter Second Number : ");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if (bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////
// Input : 10   Input : 10  Output : Equal
// Input : 15   Input : 18  Output : not Equal
/////////////////////////////////////////////////////////////////////////