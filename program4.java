import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : MergeFiles
/// Description : Accept two input files and one output file & merge both files
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program4
{
    static void MergeFiles(String File1, String File2, String Output) throws Exception
    {
        FileInputStream f1 = new FileInputStream(File1);
        FileInputStream f2 = new FileInputStream(File2);
        FileOutputStream fout = new FileOutputStream(Output);

        int ch = 0;

        while((ch = f1.read()) != -1)
        {
            fout.write(ch);
        }

        while((ch = f2.read()) != -1)
        {
            fout.write(ch);
        }

        f1.close();
        f2.close();
        fout.close();

        System.out.println("Files Merged Successfully");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter First File Name : ");
        String f1 = sobj.nextLine();

        System.out.print("Enter Second File Name : ");
        String f2 = sobj.nextLine();

        System.out.print("Enter Output File Name : ");
        String out = sobj.nextLine();

        MergeFiles(f1, f2, out);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : file1.txt , file2.txt
/// Output  : Files Get Successfully Merged
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
