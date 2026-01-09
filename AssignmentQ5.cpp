#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
// FUnction : Replace 
// Description  : Replace all Occuraces of Value Generic
// Auther : Sanyam BhupendraKumar Ravne
// Date : 09-01-2026
//
/////////////////////////////////////////////////////////////////////////

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 20, 40};
    int size = 5;

    Replace(arr, size, 20, 99);

    cout << "Array after replacement: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*
Array after replacement: 10 99 30 99 40
*/