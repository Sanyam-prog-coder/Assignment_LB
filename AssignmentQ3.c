#include<stdio.h>
///////////////////////////////////////////////////////////
// Function Name :  Display
// Description :    Accept a no. from User if no. is < 10 
//                  then print Hello otherwise print Demo
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           27/10/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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
// Input : 10   Output : Demo
// Input : 7    Output : Hello
// Input : 11   Output : Demo
///////////////////////////////////////////////////////////