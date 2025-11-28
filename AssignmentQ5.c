#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////////
//
// Function     : Reverse
// Description  : Accept string From user and Reverse it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
///////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;

    while(iStart < iEnd)
    {
        char temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Reversed String is : %s\n",Arr);

    return 0;
}
///////////////////////////////////////////////////////////////
//
// Input : SanyaM   Output : MaynaS
//
///////////////////////////////////////////////////////////////