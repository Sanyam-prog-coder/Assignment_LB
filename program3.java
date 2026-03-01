import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : walk
/// Description : Calculate the Step maximum and goal
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 28-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////////

class Walking
{
    public void walk(int Step[])
    {
        int Count = 0;
        int MaxStepWeek = Step[0];
        int Goal = 10000;

        for(int i = 0; i < Step.length; i++)
        {
            if(Step[i] >= Goal)
            {
                Count++;
            }

            if(Step[i] > MaxStepWeek)
            {
                MaxStepWeek = Step[i];
            }
        }
        System.out.println("Goal Achieved Days : "+Count);
        System.out.println("Maximum Step in week : "+MaxStepWeek);
    }
}

class program3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Steps[] = new int[7];

        for(int i = 0; i < 7; i++)
        {
            System.out.print("Steps each Day : "+(i + 1) + ":");
            Steps[i] = sobj.nextInt();

            if(Steps[i] < 0)
            {
                System.out.println("Invalid Input !");
                sobj.close();
                return;
            }
        } 

        Walking wobj = new Walking();
        wobj.walk(Steps);

        sobj.close();
    }
}