#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function     : CheckVowel
// Description  : Accepting string from user & check vowel
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') ||(*str == 'i') || (*str == 'o')|| (*str == 'u'))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : Marvellous   Output : Contains Vowel
// Input : MARVELLOUS   Output : there is No vowel(Case Sensitive)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////