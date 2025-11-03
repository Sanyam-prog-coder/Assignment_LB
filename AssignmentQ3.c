#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountTwo
// Descrption   : Accept No. from user & count frequncy of 2 in it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03//11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0 ,iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Input : 2395     Output : 1
// Input : 1018     Output : 0
// Input : 922432   Output : 3
//
/////////////////////////////////////////////////////////////////////////////////////