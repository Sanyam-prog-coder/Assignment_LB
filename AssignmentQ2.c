#include<stdio.h>

//////////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Accept ch from User and Change Case
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
//////////////////////////////////////////////////////////

void Display(char Ch)
{
    if(Ch >= 'A' && Ch <= 'Z')
    {
        Ch = Ch + 32;
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        Ch = Ch - 32; 
    }
    else if(Ch >= '0' && Ch <= '9')
    {
        Ch = Ch ;
    }
    else
    {
        Ch = Ch;
    }

    printf("Updated Value : %c",Ch);
}
int main()
{   
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
//////////////////////////////////////////////////////////
// 
// Input : A    Output : a
// Input : a    Output : A
// Input : 3    Output : 3
// Input : %    Output : %
//
//////////////////////////////////////////////////////////