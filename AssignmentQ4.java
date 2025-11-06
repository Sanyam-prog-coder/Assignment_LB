//////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : sumEvenOddDigits
// Description  : Find the sum of even and odd digits separately in a number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int evenSum = 0, oddSum = 0;

        while(num != 0)
        {
            int digit = num % 10;
            if(digit % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;

            num = num / 10;
        }

        System.out.println("Sum of even digits = " + evenSum);
        System.out.println("Sum of odd digits = " + oddSum);
    }
}

class AssignmentQ4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 123456   Output : Sum of even digits = 12
//                           Sum of odd digits = 9
//
//////////////////////////////////////////////////////////////////////////////////////////