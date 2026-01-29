import java.io.File;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : DisplayAll
/// Description : Display all files and directories from given directory
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 29-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////

public class program1
{
    static void DisplayAll(String dname)
    {
        File dir = new File(dname);

        if(dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File f : files)
            {
                System.out.println(f.getName());
            }
        }
        else
        {
            System.out.println("Invalid Directory");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Directory Name : ");
        String dname = sc.nextLine();

        DisplayAll(dname);
        sc.close();
    }
}

/////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : Marvellous
/// Output : A.txt
///          B.txt
///          PPA
/// 
/////////////////////////////////////////////////////////////////////////////
