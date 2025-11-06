class Logic
{
    void PrintDigit(int Num)
    {
        int iDigit = 0;

        while(Num != 0)
        {
            iDigit = Num % 10;
            Num = Num / 10;
            System.out.println("Digit of Num " +iDigit);
        }

    }
}

class AssignmentQ4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintDigit(9876);
    }
}