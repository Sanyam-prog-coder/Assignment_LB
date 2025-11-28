#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function     : CountWhite
// Description  : Accept string from user and Display only Digit
// Auther       : Sanyam BhupendraKuamr Ravne 
// Date         : 28/11/2025
//
////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        *str++;
    }
    return iCount;

}

int main()
{
    int iRet = 0;

    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d",iRet);

    return 0;
}
////////////////////////////////////////////////////////////////////
//
// Input : Marvellous Drive  Output : 1
//
////////////////////////////////////////////////////////////////////