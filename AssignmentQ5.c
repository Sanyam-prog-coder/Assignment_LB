#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : DigitSum
// Description  : Accept N no. from user and  Display summation of 
//                digit of each Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
////////////////////////////////////////////////////////////////////////

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iSum = 0, iDigit = 0;

    printf("\n Summation of digits for each element:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        if(iNo < 0)          
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d → %d\n", Arr[iCnt], iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    DigitSum(ptr, iSize);

    free(ptr);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 6 Input : 8225 665 3 76 953 858   Output : 17 17 3 13 17 21 
//
 ////////////////////////////////////////////////////////////////////////