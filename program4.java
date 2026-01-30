import java.io.File;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : FilesWithExtention
/// Description : Display files having given extension from directory
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class program4
{
    static void FilesWithExtention(String fName, String ext)
    {
        File dir = new File(fName);

        if (dir.exists() && dir.isDirectory())
        {
            File[] files = dir.listFiles();

            if (files != null)
            {
                for (File f : files)
                {
                    if (f.isFile() && f.getName().endsWith(ext))
                    {
                        System.out.println(f.getName());
                    }
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

        System.out.print("Enter Directory Path : ");
        String path = sc.nextLine();

        System.out.print("Enter File Extension (e.g. .txt) : ");
        String ext = sc.nextLine();

        FilesWithExtention(path, ext);

        sc.close();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : .  Java
/* Output :    program4.java
                program2.java
                program1.java
                program3.java
                program5.java
*/
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
