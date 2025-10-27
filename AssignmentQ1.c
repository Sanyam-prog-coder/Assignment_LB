#include<stdio.h>
///////////////////////////////////////////////////////////
// Function Name :  Display
// Description :    Accept a no. from User and Print *
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           27/10/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
///////////////////////////////////////////////////////////
// Input : 8    Output : ********
// Input : 4    Output : ****
///////////////////////////////////////////////////////////