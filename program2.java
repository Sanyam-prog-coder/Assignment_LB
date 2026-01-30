import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyFirstN
/// Description : Accept file name and integer N & copy first N bytes into new file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program2
{
    static void CopyFirstN(String Source, String Dest, int N) throws Exception
    {
        File file = new File(Source);

        if(file.exists())
        {
            FileInputStream fin = new FileInputStream(file);
            FileOutputStream fout = new FileOutputStream(Dest);

            int ch = 0;
            int count = 0;

            while((ch = fin.read()) != -1 && count < N)
            {
                fout.write(ch);
                count++;
            }

            System.out.println("First N Bytes Copied Successfully");

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

        CopyFirstN(src, dest, N);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt , N : 50
/// Output  : First N Bytes Copied Successfully
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
