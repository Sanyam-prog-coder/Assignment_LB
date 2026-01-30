import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyData
/// Description : Accept source and destination file names & copy file using buffered streams
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program1
{
    static void CopyData(String Source, String Dest) throws Exception
    {
        File fobjsrc = new File(Source);

        if(fobjsrc.exists())
        {
            BufferedInputStream bin = new BufferedInputStream(new FileInputStream(fobjsrc));
            BufferedOutputStream bout = new BufferedOutputStream(new FileOutputStream(Dest));

            int ch = 0;

            while((ch = bin.read()) != -1)
            {
                bout.write(ch);
            }

            bout.flush();

            System.out.println("File Copied Using Buffered Streams");

            bin.close();
            bout.close();
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

        CopyData(src, dest);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt
/// Output  : File Copied Using Buffered Streams
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
