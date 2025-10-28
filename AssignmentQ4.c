#include<stdio.h>

///////////////////////////////////////////////////////////////////
// Function Name :  DisplayConvert
// Description :    Accept one no. from user & print even factors
//                  of that No.
// Auther :         Sanyam Bhupendrakumar Ravne 
// Date :           28/10/2025
///////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))     
    {
        printf("%c", cValue - 32);           
    }
    else if((cValue >= 'A') && (cValue <= 'Z')) 
    {
        printf("%c", cValue + 32);              
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
///////////////////////////////////////////////////////////////////
// Input : a    Output : A
// Input : B    Output : b
///////////////////////////////////////////////////////////////////