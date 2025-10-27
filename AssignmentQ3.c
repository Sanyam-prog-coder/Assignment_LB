#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name :  Display
// Description :    print 5 to 1 number on screen 
// Auther :         Sanyam Bhupendrakumar Ravne
// Date :           18/10/2025
///////////////////////////////////////////////////////////

void Display()
{
    int icnt = 5;
    while(icnt >= 1)
    {
        printf("%d\n",icnt);
        icnt--;
    }
}
int main()
{
    Display();

    return 0;
}