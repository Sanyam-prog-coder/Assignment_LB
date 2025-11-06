class Logic
{
    void CheckLeapYear(int iyear)
    {
        if ((iyear % 400 == 0) || (iyear % 4 == 0 && iyear % 100 != 0))
            {
                System.out.println(iyear+" is a leap year");
            }
        else
            {
                System.out.println(iyear+ " is not a Leap Year");
            }
    }
}

class AssignmentQ1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckLeapYear(2025);
    }
}