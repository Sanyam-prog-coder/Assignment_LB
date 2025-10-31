#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function     : FHtoCs
// Description  : Accept Temp in Fh & convert into Celcius
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/20252
//
///////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temprature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Celcius : %.5lf\n",dRet);

    return 0;
}
///////////////////////////////////////////////////////////////
//
// Input : 10      Output : 
// Input : 34      Output : 
//
///////////////////////////////////////////////////////////////