#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function     : strlwrX
// Description  : Accept string from user and Convert it lowwer
// Auther       : Sanyam BhupendraKuamr Ravne 
// Date         : 28/11/2025
//
////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        *str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input : SANYAM       Output : sanyam
// Input : marvellous   Output : marvellous
//
////////////////////////////////////////////////////////////////////