#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountEven
// Description  : Accept No. from user & return frequency of even
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 14/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0, iSize = 0;
    int  *ptr = NULL;

    printf("Enter the Size : ");
    scanf("%d\n",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to Allocate memory");
        return -1;
    }


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Elements\n : ",iLength);
        scanf("%d\n",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iSize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 85 66 3 80 93 88    Output : 3
//
//////////////////////////////////////////////////////////////////////////////////////