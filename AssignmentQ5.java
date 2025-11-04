///////////////////////////////////////////////////////////////////////
//
// Function     : countDigits
// Description  : to Count the Number of Digits in given Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 04/11/2025
//
///////////////////////////////////////////////////////////////////////

class Logic
{
    void countDigits(int num)
    {
        int count = 0;

        while(num != 0)
        {
            num = num /10;
            count++ ;
        }
        System.out.println("Number of Digits :" + count);
    }
}
class AssignmentQ5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}
///////////////////////////////////////////////////////////////////////
//
// Input : 7865     Output : 4
//
///////////////////////////////////////////////////////////////////////x