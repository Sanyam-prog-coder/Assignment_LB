#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
// Function     : strlenX
// Description  : Accept String from user and Display character from it recursive
// Auther       : Ravne Sanyam Bhupendrakumar
// Date         : 07-Feb-2026
//
//////////////////////////////////////////////////////////////////////////////////

int strlenX(char *str)
{
    int iCount = 0;

    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + strlenX(str + 1);
    }
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : ");
    scanf("%s",arr);

    iRet = strlenX(arr);

    printf("%d\n",iRet);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
//
// Input    : Hello     Ouput : 5
//
//////////////////////////////////////////////////////////////////////////////////