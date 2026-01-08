#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
//
// Function : Frequency
// Description : Count Frequency of Given value in Array
// Auther   : Sanyam Bhupendrakumar Ravne
// Date : 06/01/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
T Frequency(T *Arr, int Size, T iNo)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
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
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = Frequency(arr, 9, 10);

    cout<< iRet;

    return 0;
}
/*
    4
*/