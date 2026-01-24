import java.io.File;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ListFiles
/// Description : Accept directory name and display all file names
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

public class program5 
{
    static void ListFiles(String dname) throws Exception
    {
        File ls = new File(dname);
        String[] files = ls.list();

        if(files != null)
        {
            for(String name : files)
            {
                System.out.println(name);
            }
        }
        else
        {
            System.out.println("Directory not Found");
        }
    }
    
    public static void main(String A[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Directory name : ");
        String dname = sc.nextLine();
    
        ListFiles(dname);
    }
}

////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : .
/// Output : 
/*
            program4.java
            program2.java
            Hello.txt
            program1.java
            program3.java
            program5.java
*/
/// 
////////////////////////////////////////////////////////////////////////////  