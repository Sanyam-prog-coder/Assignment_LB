import java.io.*;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ReadFile
/// Description : Accept file name and display content
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class program2
{
    static void ReadFile(String fname) throws Exception
    {
        BufferedReader br = new BufferedReader(new FileReader(fname));
        String line;

        while ((line = br.readLine()) != null)
        {
            System.out.println(line);
        }
        br.close();
    }
    
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter File Name : ");
        String fname = sc.nextLine();

        ReadFile(fname);
    }
}

////////////////////////////////////////////////////////////////////////////

/*
    Input   : program1.java    
    Output  : 
    
import java.io.File;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : Openfile
/// Description : Accept file name from user and open that file
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class OpenFile
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter File name : ");

        String fname = sc.nextLine();

        File file = new File(fname);
        if(file.exists())
        {
            System.out.println("File Succesfully Opened");
        }
        else
        {
            System.out.println("File Not Found");
        }
    }
}

public class program1
{
    OpenFile obj = new OpenFile();
}

////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : program1      Output  : File Succesfully Opend
/// Input   : Hello.txt     Output  : File Not Found
/// 
////////////////////////////////////////////////////////////////////////////
*/
////////////////////////////////////////////////////////////////////////////