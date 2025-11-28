#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : CountSmall
// Description  : Accepting string from user and count Small Ch
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////
//
// Input : Marvellous   Output : 9
//
/////////////////////////////////////////////////////////////////////