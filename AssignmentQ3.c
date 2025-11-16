#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Check
// Description  : Accept No. from user & Check that number is Contain 11 or not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 14/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }        
    return false;

    
}

int main()
{
    int iLength = 0, iCnt = 0, iSize = 0;
    int  *ptr = NULL;
    bool bRet = 0;

    printf("Enter the Size : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to Allocate memory");
        return -1;
    }


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Elements %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr,iSize);

    if(bRet == true)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }

    free(ptr);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 85 66 3 15 11 80    Output : 11 is Present
// Input : 5    Input : 45 66 12 77 55      Output : 11 is Absent
//
//////////////////////////////////////////////////////////////////////////////////////