#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
// Function     : StrRevX
// Description  : Accept String from user and Reverse it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 29/11/2025
//
////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    
    End--;

    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);

    printf("MOdified String iS : %s",Arr);

    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
// Input : Sanyam   Output : maynaS
// Input : eye      Output : eye
//
////////////////////////////////////////////////////////////////////////////