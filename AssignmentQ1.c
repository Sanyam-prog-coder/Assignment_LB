#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountEven
// Description  : Accept No. from user & return the count of even digit
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03/11/2025
//
//////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
// 
// Input : 2395     Output : 1
// Input : 1028     Output : 2
// Input : -1564    Output : 2
//
//////////////////////////////////////////////////////////////////////////////////