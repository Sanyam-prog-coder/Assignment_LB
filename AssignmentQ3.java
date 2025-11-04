////////////////////////////////////////////////////////////////////
//
// Function     : finfFactorial
// Description  : Find the Factorial the number using for Loop
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 04/11/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void findFactorial(int num)
    {
        int fact = 1;

        for(int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        System.out.println("Factorial of " + num + " is: " + fact);
    }
}

class AssignmentQ3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);   
    }
}
////////////////////////////////////////////////////////////////////
//
// Input : 5        Output : 120
//
////////////////////////////////////////////////////////////////////