#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function     : strroggleX
// Description  : Accept string from user and Toggle it
// Auther       : Sanyam BhupendraKuamr Ravne 
// Date         : 28/11/2025
//
////////////////////////////////////////////////////////////////////

void strroggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        *str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strroggleX(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input : SaNyAM       Output : sAnYam
// Input : MarVeLLouS   Output : mARvEllOUs
//
////////////////////////////////////////////////////////////////////