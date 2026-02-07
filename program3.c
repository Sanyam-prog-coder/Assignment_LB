#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Small
// Description  : Accept string from user and return small character
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
////////////////////////////////////////////////////////////////////////

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}
int main()
{
    int iRet = 0;
    char Arr[64];

    printf("Enter String : ");
    fgets(Arr, sizeof(Arr), stdin);

    iRet = Small(Arr);

    printf("small character from the string is : %d\n",iRet);

    return 0;
}