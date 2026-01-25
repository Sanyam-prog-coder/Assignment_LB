import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : WriteNameSizeData
/// Description : write file name, size and data of all Files
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 25-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////

public class program5 
{
    static void WriteNameSizeData(String dname) throws Exception
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
                    fw.write("File Name : " + f.getName() + "\n");
                    fw.write("File Size : " + f.length() + " bytes\n");
                    fw.write("Data :\n");

                    FileReader fr = new FileReader(f);
                    int ch;

                    while((ch = fr.read()) != -1)
                    {
                        fw.write(ch);
                    }
                    fw.write("\n\n");
                    fr.close();
                }
            }
            fw.close();
            System.out.println("Name,size and data written successfully");
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }

    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Directory Name : ");
        String dname = sc.nextLine();

        WriteNameSizeData(dname);
    }
}
/////////////////////////////////////////////////////////////////////////////
/// 
/// Input : TestDir    Output  : MArvellous.txt
/// 
/////////////////////////////////////////////////////////////////////////////