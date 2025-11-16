#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Frequency
// Description  : Accept No. from user and accept Another No. as N return Frequency
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 16/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the Element : ");
    scanf("%d", &iSize);

    printf("Enter the Number : ");
    scanf("%d", &iNo);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate The memory");
        return -1;
    }

    printf("Enter %d Elements", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Elements %d : ", iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize, iNo);
    printf("Frequency is %d",iRet);
    
    free(ptr);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 6 Input : 66 Input : 85 66 3 66 93 88        Output : 2
// Input : 6 Input : 12 Input : 85 11 3 15 11 111       Output : 0
//
//////////////////////////////////////////////////////////////////////////////////////