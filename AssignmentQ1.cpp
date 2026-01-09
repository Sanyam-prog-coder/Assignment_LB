#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
// FUnction :   CopyArray
// Description  : to copy the Array into Another array
// Auther : Sanyam BhupendraKumar Ravne
// Date : 09-01-2026
//
/////////////////////////////////////////////////////////////////////////

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5];
    int size = 5;

    CopyArray(arr1, arr2, size);

    cout << "Copied Array: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
/*
Copied Array: 10 20 30 40 50
*/