import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : SplitFile
/// Description : Accept file name from user & split file into two halves
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program5
{
    static void SplitFile(String FileName) throws Exception
    {
        File file = new File(FileName);
        long size = file.length();
        long half = size / 2;

        FileInputStream fin = new FileInputStream(file);
        FileOutputStream f1 = new FileOutputStream("FirstHalf.txt");
        FileOutputStream f2 = new FileOutputStream("SecondHalf.txt");

        int ch = 0;
        long count = 0;

        while((ch = fin.read()) != -1)
        {
            if(count < half)
                f1.write(ch);
            else
                f2.write(ch);

            count++;
        }

        fin.close();
        f1.close();
        f2.close();

        System.out.println("File Split Successfully");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String fname = sobj.nextLine();

        SplitFile(fname);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt
/// Output  : File Split Into Two Halves
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
