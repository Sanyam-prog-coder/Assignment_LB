#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////
//
// Function : SearchFirst
// Description : Search First Occurance of Given value in Array
// Author : Sanyam Bhupendrakumar Ravne
// Date : 06/01/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
T SearchFirst(T *Arr, int Size, T iNo)
{
    int iCount = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
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

    int iRet = SearchFirst(arr, 9, 40);

    cout << iRet;   

    return 0;
}
/*
    6
*/