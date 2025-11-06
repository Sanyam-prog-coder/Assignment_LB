class Logic
{
    void CalculatePower(int base, int exp)
    {
        int i = 0;
        int iResult = 1;

        for(i = 1; i <= exp; i++)
        {
            iResult = iResult * base;
        }

        System.out.println(base + " Raised to power " + exp + " is :" + iResult);
    }
}

class AssignmentQ5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CalculatePower(2, 5);
    }
}