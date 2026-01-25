import java.io.*;
import java.io.FileWriter;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : WriteFileName
/// Description : Write data of all into Marvellous.txt
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

public class program2
{
    static void WriteFileNames(String dname) throws Exception
    {
        File dir = new File(dname);
        FileWriter fw = new FileWriter("Marvellous.txt");

        if(dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File f : files)
            {
                if(f.isFile())
                {
                    fw.write(f.getName() + "\n");
                }
            }
            fw.close();
            System.out.print("File name written succesfully");
        }
        else
        {
            System.out.print("Invalid Directory");
        }
    }

    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sc.nextLine();

        WriteFileNames(dname);
    }
}

////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : . Output  : Marvellous.txt
/// 
////////////////////////////////////////////////////////////////////////////