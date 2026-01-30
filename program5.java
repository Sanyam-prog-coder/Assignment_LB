import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : FileExceptionHandling
/// Description : Accept file name from user & handle all possible file related exceptions
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program5
{
    static void FileExceptionHandling(String FileName)
    {
        try
        {
            FileInputStream fin = new FileInputStream(FileName);

            while(fin.read() != -1)
            {
                // Reading file
            }

            System.out.println("File Read Successfully");
            fin.close();
        }
        catch(FileNotFoundException e)
        {
            System.out.println("File Not Found Exception");
        }
        catch(IOException e)
        {
            System.out.println("IO Exception Occurred");
        }
        catch(Exception e)
        {
            System.out.println("Unknown Exception Occurred");
        }
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String fname = sobj.nextLine();

        FileExceptionHandling(fname);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt
/// Output  : File Read Successfully OR Proper Exception Message
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
