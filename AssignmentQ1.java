/////////////////////////////////////////////////////////////////////////
//
// Function     : Sumdigit
// Description  : Sum of digit of Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    void SumDigit(int num)
    {
        int sum = 0;
        while(num != 0)
        {
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        System.out.println("Sum of digits = " + sum);
    }
}
class AssignmentQ1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumDigit(1234);
    }
}
/////////////////////////////////////////////////////////////////////////
//
// Input : 1234     Output : 10
//
/////////////////////////////////////////////////////////////////////////
