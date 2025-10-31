#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function     : KMtoMeter
// Description  : Accept Distance in Km % convert inti Meter
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/20252
//
///////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
     int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance is meter/HR :%d",iRet);

    return 0;
}
///////////////////////////////////////////////////////////////
//
// Input : 5    Output : 5000
//
///////////////////////////////////////////////////////////////