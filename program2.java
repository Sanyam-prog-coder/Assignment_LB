import java.io.File;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : DisplayOnlyFiles
/// Description : Display only regular files from given directory
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 29-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////

public class program2
{
    static void DisplayOnlyFiles(String dname)
    {
        File dir = new File(dname);

        if(dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File f : files)
            {
                if(f.isFile())
                {
                    System.out.println(f.getName());
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

        DisplayOnlyFiles(dname);
        sc.close();
    }
}

/////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : Marvellous
/// Output : A.txt
///          B.txt
/// 
/////////////////////////////////////////////////////////////////////////////
