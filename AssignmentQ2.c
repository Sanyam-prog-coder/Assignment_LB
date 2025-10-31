#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function     : ReactArea
// Description  : Accept Width & Height from user and Cal Area
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 31/10/20252
//
///////////////////////////////////////////////////////////////

double ReactArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1, fValue2);

    printf("Rectangle Area is :%f",dRet);

    return 0;
}
///////////////////////////////////////////////////////////////
//
// Input : 5.3  Input : 9.78    Output : 51.8340
//
///////////////////////////////////////////////////////////////