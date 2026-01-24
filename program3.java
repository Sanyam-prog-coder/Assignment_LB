import java.io.*;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : WriteData
/// Description : Accept file name and write data at the end of file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class program3
{
    static void WriteData(String fname) throws Exception
    {
        FileWriter fw = new FileWriter(fname, true); // append mode
        fw.write("\nThis is appended data");
        fw.close();

        System.out.println("Data written successfully");
    }
    public static void main(String[] args) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter File name : ");
        String fname = sc.nextLine();

        WriteData(fname);
    }
}

////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : program2.java     Output  : Data Written Succesfully
/// 
////////////////////////////////////////////////////////////////////////////