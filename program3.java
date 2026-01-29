import java.io.File;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : DisplayOnlyDirectories
/// Description : Display only sub-directories from given directory
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 29-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////

public class program3
{
    static void DisplayOnlyDirectories(String dname)
    {
        File dir = new File(dname);

        if(dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File f : files)
            {
                if(f.isDirectory())
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

        DisplayOnlyDirectories(dname);
        sc.close();
    }
}

/////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : Marvellous
/// Output : PPA
/// 
/////////////////////////////////////////////////////////////////////////////
