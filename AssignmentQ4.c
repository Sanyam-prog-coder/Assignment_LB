#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function     : Digit
// Description  : Accept N no. from user and display all such no. 
//                which contains 3 Digits in it
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
////////////////////////////////////////////////////////////////////////

void Digit(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers containing exactly 3 digits are:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100 && Arr[iCnt] <= 999) ||
           (Arr[iCnt] <= -100 && Arr[iCnt] >= -999))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
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

    Digit(ptr, iSize);

    free(ptr);

    return 0;
}
////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 8225 665 3 76 953 858    Output : 665 953 858 
//
 ////////////////////////////////////////////////////////////////////////