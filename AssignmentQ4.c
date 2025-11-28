#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function     : DisplayDigit
// Description  : Accept string from user and Display only Digit
// Auther       : Sanyam BhupendraKuamr Ravne 
// Date         : 28/11/2025
//
////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        *str++;
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input : marve89llous121  Output : 89121
//
////////////////////////////////////////////////////////////////////