import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CountBytes
/// Description : Accept file name from user & display total number of bytes from file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program1
{
    static void CountBytes(String FileName) throws Exception
    {
        File file = new File(FileName);

        if(file.exists())
        {
            FileInputStream fin = new FileInputStream(file);
            int count = 0;

            while(fin.read() != -1)
            {
                count++;
            }

            System.out.println("Total Number of Bytes : " + count);
            fin.close();
        }
        else
        {
            System.out.println("File does not exist");
        }
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String fname = sobj.nextLine();

        CountBytes(fname);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt
/// Output  : Total Number of Bytes : 1557
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
