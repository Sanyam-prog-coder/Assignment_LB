import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : AppendData
/// Description : Accept File name and string from user & append string at end of file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program3
{
    static void AppendData(String FileName, String Data) throws Exception
    {
        FileWriter fw = new FileWriter(FileName, true);
        fw.write(Data + "\n");
        fw.close();

        System.out.println("Data Appended Successfully");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String fname = sobj.nextLine();

        System.out.print("Enter String To Append : ");
        String str = sobj.nextLine();

        AppendData(fname, str);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt    String : Hello World
/// Output  : String Appended Successfully
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
