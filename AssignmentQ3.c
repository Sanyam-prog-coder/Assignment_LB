#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function     : Difference
// Description  : Accepting string from user and Diff Small and Cap
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
/////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCount = 0;
    int Small = 0, Capital = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            Small++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            Capital++;
        }
        str++;
    }
    return iCount = Small - Capital;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}
/////////////////////////////////////////////////////////////////////
//
// Input : SanyaM   Output : 2
//
/////////////////////////////////////////////////////////////////////