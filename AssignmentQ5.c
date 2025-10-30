#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
// Function     : Percentage
// Description  : To Calculate Percentage 
// Auther       : Sanyam BhupendraKumar Ravne 
// Date         : 30/10/2025
/////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal1, int iTotal2)
{
    float fPercent = 0.0;

    if(iTotal1 == 0)
    {
        printf("Total marks cannot be zero.\n");
        return 0.0;
    }

    fPercent = ((float)iTotal2 / (float)iTotal1) * 100;

    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0; 
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////////
// Input : 600  Input : 423     Output : 70.50%
// Input : 600  Input : 00      Output : 0.0%
// Input : 600  Input : 35      Output : 5.83%
/////////////////////////////////////////////////////////////////////////