#include<stdio.h>
///////////////////////////////////////////////////////////
// Function Name :  Display
// Description :    accept two number from user and display 
//                  first number second number times
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           27/10/2025
///////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }

    printf("\n");
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue);

    printf("Enter second number : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
///////////////////////////////////////////////////////////
// Input : 12   Input : 2   Output : 12 12
// Input : -7   Input : 2   Output : -7 -7
// Input : -12  Input : -2  Output : -12 -12
///////////////////////////////////////////////////////////