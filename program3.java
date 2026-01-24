import java.io.File;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : Createdir
/// Description : create Directory from user input
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

public class program3 
{
    static void Createdir(String dname)
    {
        File Dir = new File(dname);

        if(Dir.mkdir())
        {
            System.out.print("Directory Created Succesfully");
        }
        else
        {
            System.out.print("Directory Already Exists");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Directory Name : ");
        String dname = sc.nextLine();

        Createdir(dname);
    }
}
////////////////////////////////////////////////////////////////////////////
/// 
/// Input   :   program1.java   Output   :   Directory already exists
/// Input   :   program7.java   Output  :   Directory Created Succesfully
/// 
////////////////////////////////////////////////////////////////////////////