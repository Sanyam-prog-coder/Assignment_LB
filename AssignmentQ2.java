//////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountEvenOddRange
// Description  : To calculate the Even odd Range
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 09/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountEvenOddRange(int num)
    {
        int i = 0;
        int EvenCount = 0;
        int OddCount = 0;

        for(i = 1; i <= num; i++)
        {
            if(i % 2 == 0)
            EvenCount++;

            else
            OddCount++;
        }

        System.out.println("Even Number : " +EvenCount);
        System.out.println("Odd Number : " +OddCount);
    }
}

class AssignmentQ2
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CountEvenOddRange(50);
    }
}
//////////////////////////////////////////////////////////////////////////////////////
//
// Input : 50       Output : 25     25
//
//////////////////////////////////////////////////////////////////////////////////////
