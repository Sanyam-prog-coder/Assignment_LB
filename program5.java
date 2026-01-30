import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : ReadFirst1KB
/// Description : Read first 1KB data from Combined.bin & write into output file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program5
{
    static void ReadFirst1KB(String OutputFile) throws Exception
    {
        FileInputStream fin = new FileInputStream("Combined.bin");
        FileOutputStream fout = new FileOutputStream(OutputFile);

        int ch = 0;
        int count = 0;

        while((ch = fin.read()) != -1 && count < 1024)
        {
            fout.write(ch);
            count++;
        }

        fin.close();
        fout.close();

        System.out.println("First 1KB Data Written Successfully");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Output File Name : ");
        String out = sobj.nextLine();

        ReadFirst1KB(out);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : output.txt
/// Output  : First 1KB Written Successfully
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
