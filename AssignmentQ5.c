#include<stdio.h>

///////////////////////////////////////////////////////////////////////
// Function Name :  Accept
// Description :    Accept number From user & print * on screen
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           19/10/2025
//////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt<= iNo; icnt++)
    {
        printf("*\t\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}