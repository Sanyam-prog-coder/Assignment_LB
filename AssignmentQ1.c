#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : CountCapital
// Description  : Accepting string from user and count Capital Ch
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////
//
// Input : Marvellous Multi OS  Output : 4
//
/////////////////////////////////////////////////////////////////////