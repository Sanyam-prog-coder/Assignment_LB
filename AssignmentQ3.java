/////////////////////////////////////////////////////////////////////////
//
// Function     : FindMax
// Description  : Find the Maximum of two Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    void findMax(int a, int b)
    {
        if(a > b)
            System.out.println("Maximum number is: " + a);
        else if(b > a)
            System.out.println("Maximum number is: " + b);
        else
            System.out.println("Both numbers are equal: " + a);
    }
}

class AssignmentQ3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}

/////////////////////////////////////////////////////////////////////////
//
// Input : 20   Input : 15  Output : 20
//
/////////////////////////////////////////////////////////////////////////