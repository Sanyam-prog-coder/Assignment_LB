///////////////////////////////////////////////////////////////////////////////
//
// Function     : FindSmallestDigit
// Description  : To find the smallest Digit of given Number
// Auther       : Sanyam BHupendraKumar Ravne
// Date         : 09/11/2025
//
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findSmallestDigit(int num)
    {
        int digit = 0, min = 9;

        while(num > 0)
        {
            digit = num % 10;

            if(digit < min)
            {
                min = digit;
            }

            num = num / 10;
        }

        System.out.println("Smallest digit is: " + min);
    }
}
class AssignmentQ5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.findSmallestDigit(45872);
    }
}
///////////////////////////////////////////////////////////////////////////////
//
// Input : 45872    Output : 2
//
///////////////////////////////////////////////////////////////////////////////