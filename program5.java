import java.io.*;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : DisplayFiles
/// Description : Display File name and size from directory
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class program5
{
    static void DisplayFiles(String dname)
    {
        File dir = new File(dname);
        File files[] = dir.listFiles();

        for(File f : files)
        {
            if(f.isFile())
            {
                System.out.println(f.getName() + " : " + f.length() + " bytes");
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Directory Name : ");
        String dname = sc.nextLine();

        DisplayFiles(dname);
    }
}

////////////////////////////////////////////////////////////////////////////
/// 
/// Input   :   .
/// Out
// put   :   
/*              program4.java : 1154 bytes
                program2.java : 967 bytes
                program1.java : 1360 bytes
                program3.java : 1090 bytes
                program5.java : 1069 bytes
*/
/// 
////////////////////////////////////////////////////////////////////////////