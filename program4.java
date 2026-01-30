import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CreateCombined
/// Description : Accept directory name & create Combined.bin storing all files data
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program4
{
    static void CreateCombined(String DirName) throws Exception
    {
        File dir = new File(DirName);
        FileOutputStream fout = new FileOutputStream("Combined.bin");

        File files[] = dir.listFiles();

        for(File f : files)
        {
            if(f.isFile())
            {
                FileInputStream fin = new FileInputStream(f);
                int ch = 0;

                while((ch = fin.read()) != -1)
                {
                    fout.write(ch);
                }
                fin.close();
            }
        }

        fout.close();
        System.out.println("Combined.bin Created Successfully");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Directory Name : ");
        String dir = sobj.nextLine();

        CreateCombined(dir);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : Marvellous
/// Output  : Combined.bin Created
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
