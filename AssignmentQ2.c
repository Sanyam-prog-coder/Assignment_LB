#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Frequency
// Description  : Accept No. from user & return Diff betwn frequency of even and odd
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 14/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0; 
    int Even = 0, Odd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
    }
    return (Even - Odd);
}

int main()
{
    int iRet = 0, iCnt = 0, iSize = 0;
    int  *ptr = NULL;
    int iLength = 0;

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
        printf("Enter Elements\n : ");
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iSize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 7    Input : 85 66 3 80 93 88 90     Output : 1
//
//////////////////////////////////////////////////////////////////////////////////////