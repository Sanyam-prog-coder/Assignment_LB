
package Assignment58;

import java.io.File;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
///
/// Function    : DisplayFiles
/// Description : Display all regular files from given directory
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
///
////////////////////////////////////////////////////////////////////////////

public class program1 
{
    static void DisplayFiles(String dname)
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
            System.out.println("Invalid directory");
        }
    }
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sc.nextLine();

        DisplayFiles(dname);
    }
}
////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : .     Output  : program1.java
/// 
////////////////////////////////////////////////////////////////////////////