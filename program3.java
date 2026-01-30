import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyLastN
/// Description : Accept file name and integer N & copy last N bytes into new file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program3
{
    static void CopyLastN(String Source, String Dest, int N) throws Exception
    {
        File file = new File(Source);

        if(file.exists())
        {
            long size = file.length();
            FileInputStream fin = new FileInputStream(file);
            FileOutputStream fout = new FileOutputStream(Dest);

            fin.skip(size - N);

            int ch = 0;
            while((ch = fin.read()) != -1)
            {
                fout.write(ch);
            }

            System.out.println("Last N Bytes Copied Successfully");

            fin.close();
            fout.close();
        }
        else
        {
            System.out.println("Source file does not exist");
        }
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Source File Name : ");
        String src = sobj.nextLine();

        System.out.print("Enter Destination File Name : ");
        String dest = sobj.nextLine();

        System.out.print("Enter Number of Bytes : ");
        int N = sobj.nextInt();

        CopyLastN(src, dest, N);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt , N : 40
/// Output  : Last N Bytes Copied Successfully
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
