#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
// FUnction :   SecondMin
// Description  : To check Second Minimum Element Generic
// Auther : Sanyam BhupendraKumar Ravne
// Date : 09-01-2026
//
/////////////////////////////////////////////////////////////////////////

template <class T>
T SecondMin(T *arr, int iSize)
{
    T min, secondMin;

    if(arr[0] < arr[1])
    {
        min = arr[0];
        secondMin = arr[1];
    }
    else
    {
        min = arr[1];
        secondMin = arr[0];
    }

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if(arr[i] < secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }
    }
    return secondMin;
}


int main()
{
    int arr[] = {10, 50, 30, 40, 20};
    int size = 5;

    cout << "Second Smallest Element: " << SecondMin(arr, size);
    return 0;
}
/*
Second Smallest Element: 20
*/