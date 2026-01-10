#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function : Swap
// Description : To swap two values using generic programming
// Author : Sanyam BhupendraKumar Ravne
// Date : 10-01-2026
//
///////////////////////////////////////////////////////////////////////

template<class T>
void Swap(T &no1, T &no2)
{
    T temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int a = 10, b = 20;
    Swap(a, b);
    cout << "After swapping integers : " << a << " " << b << "\n";

    float x = 3.5f, y = 7.8f;
    Swap(x, y);
    cout << "After swapping floats   : " << x << " " << y << "\n";

    return 0;
}
/*
Input : 10,20       Output : After swapping integers : 20 10
Input : 3.5,7.8     Output : After swapping floats   : 7.8 3.5
*/