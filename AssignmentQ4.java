///////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountFactors
// Description  : to Count total Number of factors of given Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 09/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountFactors(int num)
    {
        int i = 0;
        int iCount = 0;

        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                iCount++;
            }
        }
        System.out.println("factors of " + num + " is : " +iCount);
    }
}
class AssignmentQ4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CountFactors(20);
    }
}
///////////////////////////////////////////////////////////////////////////////////////
//
// Input : 20       Output : 6
//
///////////////////////////////////////////////////////////////////////////////////////