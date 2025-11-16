#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Frequency
// Description  : Accept No. from user & return frequency of 11 from it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 14/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11 )
        {
            iFreq++;
        }
        else
        {

        }
    }
    return iFreq;
}

int main()
{
    int iLength = 0, iCnt = 0, iSize = 0;
    int  *ptr = NULL;
    int iRet = 0;

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

    iRet = Frequency(ptr,iSize);

    printf("%d",iRet);

    free(ptr);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 85 66 3 15 11 80    Output : 1
// Input : 5    Input : 45 66 12 77 55      Output : 0
//
//////////////////////////////////////////////////////////////////////////////////////