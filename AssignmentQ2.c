#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function     : struprX
// Description  : Accept string from user and Convert it capital
// Auther       : Sanyam BhupendraKuamr Ravne 
// Date         : 28/11/2025
//
////////////////////////////////////////////////////////////////////

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprX(Arr);

    printf("Modified String is : %s",Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input : sanyam       Output : SANYAM
// Input : MARVELLOUS   Output : MARVELLOUS
//
////////////////////////////////////////////////////////////////////