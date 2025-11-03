#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountRange
// Description  : Accept No. from user & return the Count of digit in betwn 3 to 7
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 03/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
//
// Input : 2395     Output : 1
// Input : 1018     Output : 0
//
///////////////////////////////////////////////////////////////////////////////////// 
