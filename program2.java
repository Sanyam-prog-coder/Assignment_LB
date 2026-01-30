import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyWithTime
/// Description : Copy file using normal & buffered streams and display time required
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program2
{
    static void CopyWithTime(String Source) throws Exception
    {
        long start, end;

        // Normal Stream
        start = System.currentTimeMillis();
        FileInputStream fin = new FileInputStream(Source);
        FileOutputStream fout = new FileOutputStream("NormalCopy.txt");

        int ch = 0;
        while((ch = fin.read()) != -1)
        {
            fout.write(ch);
        }
        fin.close();
        fout.close();
        end = System.currentTimeMillis();

        System.out.println("Time for Normal Stream : " + (end - start) + " ms");

        // Buffered Stream
        start = System.currentTimeMillis();
        BufferedInputStream bin = new BufferedInputStream(new FileInputStream(Source));
        BufferedOutputStream bout = new BufferedOutputStream(new FileOutputStream("BufferedCopy.txt"));

        while((ch = bin.read()) != -1)
        {
            bout.write(ch);
        }
        bout.flush();
        bin.close();
        bout.close();
        end = System.currentTimeMillis();

        System.out.println("Time for Buffered Stream : " + (end - start) + " ms");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Source File Name : ");
        String src = sobj.nextLine();

        CopyWithTime(src);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt
/// Output  : Time for Normal Stream : 20 ms Time for Buffered Stream : 2 ms
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
