import java.io.*;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : CreateFile
/// Description : Accept file name and create new file
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

class program4
{
    // Separate function for logic
    static void CreateFile(String fname) throws Exception
    {
        File file = new File(fname);

        if (file.createNewFile())
        {
            System.out.println("File created successfully");
        }
        else
        {
            System.out.println("File already exists");
        }
    }

    // main function
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter File Name : ");
        String fname = sc.nextLine();

        CreateFile(fname);   // function call
    }
}


////////////////////////////////////////////////////////////////////////////
/// 
/// Input : program5.java   Output  : File created succesfully
/// 
////////////////////////////////////////////////////////////////////////////