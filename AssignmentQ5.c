#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
// Function     : SquareMeter
// Description  : Accept area in sqft & convert into sqmeter
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/2002
//
///////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dSquareMeter = 0.0;
    const double SQUARE_METER_VALUE = 0.0929;

    dSquareMeter = iValue * SQUARE_METER_VALUE;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square in Meter : %.6lf\n",dRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////
//
// Input : 5    Output : 0.464500
// Input : 10   Output : 0.929000
//
///////////////////////////////////////////////////////////////////////