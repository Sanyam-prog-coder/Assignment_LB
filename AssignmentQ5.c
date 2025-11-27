#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : DisplaySchedule
// Description  : Accept Ch from user and schedule Exam
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////

int DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your Exam At 7 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your Exam At 8.30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your Exam At 9.20 AM");
    }
    else if(chDiv == 'D')
    {
        printf("Your Exam At 10.30 AM");
    }
}

int main()
{
    char cValue ='\0';
    bool bRet = false;

    printf("Enter Your Devision : ");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);
     
    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : A    Output : Your Exam At 7 AM
// Input : d    Output : (Case Sensetive)
//
////////////////////////////////////////////////////////////////////////