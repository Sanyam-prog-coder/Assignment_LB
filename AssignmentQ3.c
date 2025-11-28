#include<stdio.h>

//////////////////////////////////////////////////////
//
// Function     : Display
// Description  : Accept ch from user and display 
//                all ch from the given ch
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
//////////////////////////////////////////////////////

void Display(char Ch)
{
    char Cnt = 0;

    if(Ch >= 'A' && Ch <= 'Z')
    {
        for(Cnt = Ch; Cnt <= 'Z'; Cnt++)
        {
            printf("%c ", Cnt);
        }
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        for(Cnt = Ch; Cnt <= 'z'; Cnt++)
        {
            printf("%c ", Cnt);
        }
    }
    else
    {

    }
    printf("\n");
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
//////////////////////////////////////////////////////
//
// Input : Y    Output : Y Z
// Input : u    Output : u v w x y z
// Input : 8    Output : 
//
//////////////////////////////////////////////////////