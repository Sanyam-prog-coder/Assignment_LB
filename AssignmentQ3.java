/////////////////////////////////////////////////////////////////////////////
//
// Function     : DisplayFactors
// Description  : To Display All Factors
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 09/11/2025
// 
/////////////////////////////////////////////////////////////////////////////

class Logic 
{
    void DisplayFactors(int num)
    {
        int i = 0;

        for(i = 1; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                System.out.println(i + " ");
            }
        }
        System.out.println();
    }
}
class AssignmentQ3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.DisplayFactors(12);
    }
}
/////////////////////////////////////////////////////////////////////////////
// 
// Input : 12   Output : 1  2   3   4   6
//
/////////////////////////////////////////////////////////////////////////////
