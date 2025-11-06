///////////////////////////////////////////////////////////////////////////////////
//
// Function     : PrintTable
// Description  : print the table of multiple Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
///////////////////////////////////////////////////////////////////////////////////
class Logic
{
    void printTable(int num)
    {
        System.out.println("Multiplication Table of " + num + ":");
        for(int i = 1; i <= 10; i++)
        {
            System.out.println(num + " x " + i + " = " + (num * i));
        }
    }
}

class AssignmentQ5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.printTable(5);
    }
}
///////////////////////////////////////////////////////////////////////////////////
//
// Input : 5    Output :    Multiplication Table of 5:
                        /*  5 x 1 = 5
                            5 x 2 = 10
                            5 x 3 = 15
                            5 x 4 = 20
                            5 x 5 = 25
                            5 x 6 = 30
                            5 x 7 = 35
                            5 x 8 = 40
                            5 x 9 = 45
                            5 x 10 = 50 */
//
///////////////////////////////////////////////////////////////////////////////////