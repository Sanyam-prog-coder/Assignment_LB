import java.io.*;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : CopyFile
/// Description : Copy data from one file to another
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class program1
{
    static void CopyFile(String src, String Dest) throws Exception
    {
        FileInputStream fin = new FileInputStream(src);
        FileOutputStream fout = new FileOutputStream(Dest);

        int ch;
        while((ch = fin.read()) != -1)
        {
            fout.write(ch);
        }

        fin.close();
        fout.close();
    }

    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Source File : ");
        String src = sc.nextLine();

        System.out.print("Enter Destination File : ");
        String Dest = sc.nextLine();

        CopyFile(src, Dest);
        System.out.println("File Copied Succesfully");
    }
}
////////////////////////////////////////////////////////////////////////////
/// 
/// Input1 : program1.java Input2 : program6.java 
/// Output  : File Copied Succesfully
/// 
////////////////////////////////////////////////////////////////////////////