////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CheckPerfect
// Description  : check the Number is Perfect or Not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 07/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CheckPerfect(int Num)
    {
        int iSum = 0;

        for(int i = 1; i < Num; i++)
        {
            if(Num % i == 0)
            iSum += i;
        }
        if(iSum == Num && Num > 0)
        {
            System.out.println( Num+ " is a Perfect Number");
        }
        else
        {
            System.out.println(Num+ " is Not a Perfect Number");
        }
    }
}
class AssignmentQ3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPerfect(6);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 6        Output : is a Perfect Number
//
////////////////////////////////////////////////////////////////////////////////////////////////////////