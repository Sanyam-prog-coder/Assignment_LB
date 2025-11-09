//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : productDigit
// Description  : Calculate the product of given Digit
// Auther       : Sanyam BHupendraKumar Ravne
// Date         : 09/11/2025
// 
//////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void productDigit(int num)
    {
        int iproduct = 1;
        int idigit = 0;

        while(num > 0)
        {
            idigit = num % 10;
            iproduct = iproduct * idigit;
            num = num / 10;
        }

        System.out.println("Product of digits is: " + iproduct); 
    }
}
class AssignmentQ1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.productDigit(234);
    }
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 234      Output : 24
//
//////////////////////////////////////////////////////////////////////////////////////
