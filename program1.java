import java.io.File;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : FileReader
/// Description : Accept file name from user and open that file
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class program1
{
    static void FileReader(String fname) throws Exception
    {
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
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter File name : ");
        String fname = sc.nextLine();

        FileReader(fname);
    }

}

////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : program1      Output  : File Succesfully Opend
/// Input   : Hello.txt     Output  : File Not Found
/// 
////////////////////////////////////////////////////////////////////////////