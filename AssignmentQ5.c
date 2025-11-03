#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Count
// Descrption   : Accept No. from user & count frequncy of such a Digit less than 6
//                in it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03//11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0 ,iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequncy is %d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Input : 2395     Output : 3
// Input : 9440     Output : 3
// Input : 922432   Output : 6
//
/////////////////////////////////////////////////////////////////////////////////////