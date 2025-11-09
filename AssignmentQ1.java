////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : SumEvenNumber
// Description  : find sum of all Even NO. to N
// Auther       : Sanyam BhupendraKummar Ravne  
// Date         : 07/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void SumEvenNumber(int Num)
    {
        int i = 0;
        int isum = 0;

        for(i = 2; i <= Num; i+= 2)
        {
            isum += i;
        }
        System.out.println("Sum of even numbers up to " + Num + " is: " + isum);
    }
}

class AssignmentQ1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.SumEvenNumber(10);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 10   Output : Sum of even numbers up to 10 is: 30
//
////////////////////////////////////////////////////////////////////////////////////////////////////////