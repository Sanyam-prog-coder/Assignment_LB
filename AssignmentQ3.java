//////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : printEvenNumbers
// Description  : Print all Even Number upto N
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printOddNumbers(int n)
    {
        System.out.println("Odd numbers up to " + n + ":");
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
                System.out.print(i + " ");
        }
        System.out.println();
    }
}

class AssignmentQ3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 20   Output : 1 3 5 7 9 11 13 15 17 19
//
//////////////////////////////////////////////////////////////////////////////////////////