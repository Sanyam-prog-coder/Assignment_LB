import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyData
/// Description : Accept Source File And Destination file from user & Copy data using buffer
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program2
{
    static void CopyData(String Source, String Dest) throws Exception
    {
        File fobjsrc = new File(Source);

        if(fobjsrc.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobjsrc);
            FileOutputStream foobj = new FileOutputStream(Dest);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer, 0, iRet);
            }

            System.out.println("File Copied Successfully Using Buffer");

            fiobj.close();
            foobj.close();
        }
        else
        {
            System.out.println("There is no such source file");
        }
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Source File Name : ");
        String FileNameSrc = sobj.nextLine();

        System.out.print("Enter Destination File Name : ");
        String FileNameDest = sobj.nextLine();

        CopyData(FileNameSrc, FileNameDest);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt    Output : copy.txt
/// Output  : File Get Successfully Copied
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
