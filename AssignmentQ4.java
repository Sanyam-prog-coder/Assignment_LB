//////////////////////////////////////////////////////////////////////
//
// Function     : reverseNumber
// Description  : to Reverce a Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 04/11/2025
//
//////////////////////////////////////////////////////////////////////

class Logic
{
    void reverseNumber(int num)
    {
        int rev = 0;
        int digit;

        while(num != 0)
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        }
        System.out.println("Reverce number is : " + rev);
    }
}
class AssignmentQ4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}
//////////////////////////////////////////////////////////////////////
//
// Input : 1234     Output : 4321
//
//////////////////////////////////////////////////////////////////////