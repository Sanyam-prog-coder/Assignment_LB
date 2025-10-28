#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name :  CheckVowel
// Description :    Accept character form user and check whesther that character is Vowel or Not
// Auther :         Sanyam Bhupendrakumar Ravne 
// Date :           28/10/2025
////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int Bool ;

#define TRUE 1
#define FALSE 0

bool CheckVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' ||
       cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character:\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
// Input : E    Output : Vowel
// Input : e    output : Vowel
// Input : d    Output : Not Vowel
////////////////////////////////////////////////////////////////////////////////////////////////////