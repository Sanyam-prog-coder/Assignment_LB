#include<Stdio.h>

///////////////////////////////////////////////////////////////////////
// Function     : FindLargest
// Description  : Find Largest Among Three Number
// Auther       : Sanyam BhupendraKumar ravne
// Date         : 30/10/2025
///////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else 
    {
        return z;
    }  
}
int main()
{
    int a;
    int b;
    int c;
    int Result;

    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    printf("Enter Third Number : ");
    scanf("%d",&c);

    Result = FindLargest(a, b, c);
    printf("Largest Number is : %d\n", Result);

    return 0;
}
///////////////////////////////////////////////////////////////////////
// Input : 8  Input : 4  Input : 6    Output : 8
// Input : 52 Input : 41 Input : 5    Output : 52
// Input : 10 Input : 46 Input : 9    Output : 46
///////////////////////////////////////////////////////////////////////
