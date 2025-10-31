#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function     : CircleArea
// Description  : Accept No. from user & Cal its Area
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/20252
//
///////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    const float PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Circle Area is %f\n",dRet);

    return 0;
}
///////////////////////////////////////////////////////////////
//
// Input : 5.5      Output : 94.9850
// Input : 10.4     Output : 339.6223
//
///////////////////////////////////////////////////////////////