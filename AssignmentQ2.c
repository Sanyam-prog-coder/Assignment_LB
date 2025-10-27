#include<stdio.h>
///////////////////////////////////////////////////////////
// Function Name :  Display
// Description :    Accept a no. from User and Print *
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           27/10/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    
    while (iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
///////////////////////////////////////////////////////////
// Input : 4    Output : ****
// Input : 7    Output : *******
///////////////////////////////////////////////////////////   