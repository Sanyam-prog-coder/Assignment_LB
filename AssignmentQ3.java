class Logic
{
    void CheckDivisiable(int Num)
    {
        if (Num % 5 == 0)
        {
            System.out.println(Num+ " is divisible by 5");
        } 
        else if(Num % 11 == 0)
        {
            System.out.println(Num+ " is divisble by 11");
        }
        else
        {
            System.out.println(Num+ " Not Divisble by 5 or 11");
        }
    }
}
class AssignmentQ3
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckDivisiable(76);
    }
}