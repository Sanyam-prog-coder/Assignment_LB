/////////////////////////////////////////////////////////////////////////////
//
// Function     : FindLargestDigit
// Description  : To find Largest Digit from Given 
// Auther       : Sanyam BHupendraKumar Ravne
// Date         : 09/11/2025
//
/////////////////////////////////////////////////////////////////////////////

class Logic
{
    void FindLargestDigit(int num)
    {
        int digit = 0, max = 9;

        while(num < 0)
        {
            digit = num % 10;

            if(digit > max)
            {
                max = digit;
            }

            num = num / 10;
        }

        System.out.println("Largestt digit is: " + max);
    }
}
class AssignmentQ4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindLargestDigit(83429);
    }
}
/////////////////////////////////////////////////////////////////////////////
//
// Input : 83429        Output : 9
//
/////////////////////////////////////////////////////////////////////////////