#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
//
// Function : SearchLast
// Description : Search Last Occurance of Given value in Array
// Author : Sanyam Bhupendrakumar Ravne
// Date : 06/01/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
T SearchLast(T *Arr, int Size, T iNo)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = Size; iCnt > 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr, 9, 40);

    cout << iRet;   

    return 0;
}
/*
    8
*/