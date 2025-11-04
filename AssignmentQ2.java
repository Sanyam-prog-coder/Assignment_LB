////////////////////////////////////////////////////////////////////
//
// Function     : CheckEvenOdd
// Description  : Check whether given Number is Even or Odd
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 04/11/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckEvenOdd(int num)
    {
        if(num % 2 == 0)
        {
            System.out.println(num + "is Even Number");
        }
        else
        {
            System.out.println(num + "is Odd Number");
        }
    }
}
class AssignmentQ2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(8);
    }
}
////////////////////////////////////////////////////////////////////
//
// Input : 7        Output : 7
// Input : 8        Output : 8
//
////////////////////////////////////////////////////////////////////