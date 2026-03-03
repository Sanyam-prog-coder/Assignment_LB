import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : classroom
/// Description : Calculate the Avg and failed students count
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 03-March-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////////

class Student
{
    public void classroom(int N, int M, int Student[][])
    {
        int [] StudentTotals = new int[N];
        int TopperStudnet = 0;

        int SubjectSum = 0;

        int i = 0, j = 0;

        System.out.println("Student totals : ");
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                StudentTotals[i] = StudentTotals[i] + Student[i][j];
            }
            System.out.println("Student " + (i + 1) + " : " + StudentTotals[i]);

            if(StudentTotals[i] > StudentTotals[TopperStudnet])
            {
                TopperStudnet = i;
            }
        }
        System.out.println("Subject Average : ");

        for(j = 0; j < M; j++)
        {
            SubjectSum = 0;
            for(i = 0; i < N; i++)
            {
                SubjectSum = SubjectSum + Student[i][j];
            }
            System.out.println("Subject " + (j + 1) + " : " + (SubjectSum / N));
        }

        System.out.println("Student Fail : ");
        {
            for(i = 0; i < N; i++)
            {
                for(j = 0; j < M; j++)
                {
                    if(Student[i][j] < 35)
                    {
                        System.out.println("Students "+(i + 1));
                        break;
                    }
                }
            }
        }
    }
}

class program1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int N = 0, M = 0;
        int Value = 0;

        System.out.println("Number of Student : ");
        N = sobj.nextInt();

        System.out.println("Number of Subject : ");
        M = sobj.nextInt();

        if((N < 0 || M < 0))
        {
            System.out.println("Invalid Input");
            return;
        }
       
        int Student[][] = new int[N][M];
        int i = 0, j = 0;

        System.out.println("Enter Marks of each student : ");
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                Value = sobj.nextInt();
                
                if(Value < 0 || Value > 100)
                {
                    System.out.println("Invalid Input !");
                    return;
                }
                Student[i][j] = Value;
            }
        }
        
        Student ssobj = new Student();
        ssobj.classroom(N, M, Student);

        sobj.close();
    }
}
