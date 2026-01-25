import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : WriteNameAndData
/// Description : write file name along with data
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 25-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////

public class program4 
{
    static void WriteNameAndData(String dname) throws Exception
    {
        File dir = new File(dname);
        FileWriter fw = new FileWriter("Marvellous.Java");

        if(dir.isDirectory())
        {
            File file[] = dir.listFiles();

            for(File f : file)
            {
                if(f.isFile())
                {
                    fw.write("File name : " +f.getName() + "\n");

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
            System.out.println("Name and data Written succesfully");
        }
        else
        {
            System.out.print("Invalid Directory");
        }
    } 

    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String dname = sc.nextLine();

        WriteNameAndData(dname);
    }
}
/////////////////////////////////////////////////////////////////////////////
/// 
/// Input : TestDir Output  : Marvellous.java
/// 
/////////////////////////////////////////////////////////////////////////////