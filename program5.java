import java.io.File;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : DisplayFileWithPath
/// Description : Display file name along with absolute path
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 29-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////

public class program5
{
    static void DisplayFileWithPath(String dname)
    {
        File dir = new File(dname);

        if(dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File f : files)
            {
                if(f.isFile())
                {
                    System.out.println(f.getName() + " -> " + f.getAbsolutePath());
                }
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

        DisplayFileWithPath(dname);
        sc.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : Marvellous
/// Output : A.txt -> /home/sanyam/Desktop/Assignment_LB/Assignment59/Marvellous/A.txt
///          B.txt -> /home/sanyam/Desktop/Assignment_LB/Assignment59/Marvellous/B.txt
/// 
/// 
/////////////////////////////////////////////////////////////////////////////////////////
