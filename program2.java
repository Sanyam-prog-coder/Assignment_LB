import java.io.File;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : 
/// Description : 
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

public class program2 
{
    static void CheckFile(String fname)
    {
        File f = new File(fname);
        
        if(f.exists() && f.isFile())
            {
                System.out.print("It is Regular File ");
            } 
        else
        {
            System.out.print("It is NOT a Regular File");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String fname = sc.nextLine();

        CheckFile(fname);
    }
}
////////////////////////////////////////////////////////////////////////////
/// 
/// Input : program1.java   Output : It is Regular File
/// Input : program6.java   Output : It is Not Regular File
/// 
////////////////////////////////////////////////////////////////////////////