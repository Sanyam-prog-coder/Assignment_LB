#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Function     : Check
// Description  : Accept 1 No from user and accept another No from user
//                check whether No is present or not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 18/11/2025
//
//////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength, int iNO)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            return true;
        }
    }
    return false;
}

int main()
{   
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number you want to search: ");
    scanf("%d", &iValue);

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

    bRet = Check(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is absent\n");
    }

    free(ptr);

    return 0;
}
//////////////////////////////////////////////////////////////////////////
//
// Input : 6    Input : 66      Input : 85 66 3 66 93 88    
// Output : No is present
// Input : 6    Input : 12      Input : 85 11 3 15 11 111 
// Output : No is Absent
//
 //////////////////////////////////////////////////////////////////////////