class Logic
{
    void DisplayGrade(int iMarks)
    {
        if((iMarks >= 90) && iMarks <= 100)
        {
            System.out.println("Grade A++");
        }
        else if (iMarks >= 80)
        {
            System.out.println("Grade A+");
        }
        else if (iMarks >= 70)
        {
            System.out.println("Grade B+");
        }
        else if (iMarks >= 60)
        {
            System.out.println("Grade B");
        }
        else if ((iMarks >= 50) && (iMarks <= 35))
        {
            System.out.println("Grade C");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}
class AssignmentQ2
{
    public static void main(String A[])
    {
        Logic dgobj = new Logic();
        dgobj.DisplayGrade(22);
    }
}