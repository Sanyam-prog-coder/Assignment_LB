/////////////////////////////////////////////////////////////////////////
//
// Function     : CheckPalindrome
// Description  : Check the Number is Palindrome or not 
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//
/////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPalindrome(int num)
    {
        int original = num;
        int reversed = 0;

        while(num != 0)
        {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num / 10;
        }

        if(original == reversed)
            System.out.println(original + " is a Palindrome number.");
        else
            System.out.println(original + " is not a Palindrome number.");
    }
}

class AssignmentQ2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}
/////////////////////////////////////////////////////////////////////////
//
// Input : 121      Outptu : is a palindrome Number
// Input : 122      Output : is not palindrome Number
//
/////////////////////////////////////////////////////////////////////////