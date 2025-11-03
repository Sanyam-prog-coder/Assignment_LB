#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountFour
// Descrption   : Accept No. from user & count frequncy of 4 in it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03//11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0 ,iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequncy is %d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Input : 2395     Output : 0
// Input : 9440     Output : 4
// Input : 922432   Output : 1
//
/////////////////////////////////////////////////////////////////////////////////////