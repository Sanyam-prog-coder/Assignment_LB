import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyData
/// Description : Accept Source File And Destination file from user & Copy data from source to dest 
/// Auther      : Ravne Sanyam Bhupendrakumar
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
            File fobjdest = new File(Dest);

            FileInputStream fiobj = new FileInputStream(fobjsrc);
            FileOutputStream foobj = new FileOutputStream(fobjdest);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer, 0, iRet);
            }

            System.out.println("File Copied Successfully...");

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
/// Input   : program1.java     Input  : program1.c
/// Output  : File Get Succesfully Copied
/// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
