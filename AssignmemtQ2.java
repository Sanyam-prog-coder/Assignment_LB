//////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : printEvenNumbers
// Description  : Print all Even Number upto N
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printEvenNumbers(int n)
    {
        System.out.println("Even numbers up to " + n + ":");
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
                System.out.print(i + " ");
        }
        System.out.println();
    }
}

class AssignmentQ2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 20   Output : 11 is a primr Number
//
//////////////////////////////////////////////////////////////////////////////////////////