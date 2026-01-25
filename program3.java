import java.io.*;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
///
/// Function    : WriteFileData
/// Description : Write data of all files into Marvellous.txt
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
///
////////////////////////////////////////////////////////////////////////////

class Program3
{
    static void WriteFileData(String dname) throws Exception
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
                    FileReader fr = new FileReader(f);
                    int ch;

                    while((ch = fr.read()) != -1)
                    {
                        fw.write(ch);
                    }
                    fw.write("\n");
                    fr.close();
                }
            }
            fw.close();
            System.out.println("Data written successfully");
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name : ");
        String dname = sc.nextLine();

        WriteFileData(dname);
    }
}
////////////////////////////////////////////////////////////////////////////
/// 
/// Input : TestDir     Output  : Data Written Succesfully
/// 
////////////////////////////////////////////////////////////////////////////
