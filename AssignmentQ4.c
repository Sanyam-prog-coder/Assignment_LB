#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
// Function     : Multiply
// Description  : Accept Three No. and print its Multiplication
// Auther       : Sanyam BhupendraKumar Ravne 
// Date         : 30/10/2025
/////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    if(iNo1 != 0)
    {
        iAns = iAns * iNo1;
    }

    if(iNo2 != 0)
    {
        iAns = iAns * iNo2;
    }

    if(iNo3 != 0)
    {
        iAns = iAns * iNo3;
    }

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please Enter First Numbers: ");
    scanf("%d", &iValue1);

    printf("Please Enter Second Numbers: ");
    scanf("%d", &iValue2);

    printf("Please Enter Third Numbers: ");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
// Input : 5 Input : 6 Input : 8    Output : 240
// Input : 8 Input : 6 Input : 0    Output : 48
// Input : 0 Input : 0 Input : 0    Output : 0
/////////////////////////////////////////////////////////////////////////