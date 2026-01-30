import java.io.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : SmallestFile
/// Description : Accept name of Directory & display the name of the Smallest file
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class program3
{
    static void SmallestFile(String fName)
    {
        File dir = new File(fName);

        if((dir.exists()) && dir.isDirectory())
        {
            File[] files = dir.listFiles();
            File Smallest = null;

            if(files != dir.listFiles());
            {
                for(File f : files)
                {
                    if(f.isFile())
                    {
                        if(Smallest == null || f.length() < Smallest.length())
                        {
                            Smallest = f;
                        }
                    }
                }
            }
            if(Smallest != null)
            {
                System.out.println("Smallest File : "+Smallest.getName());
            }
            else
            {
                System.out.println("No Files Found");
            }
        }
        else
        {
            System.out.println("Invalid Directory");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Directory Path : ");
        String path = sc.nextLine();

        SmallestFile(path);
        
        sc.close();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : . Output  : program3.java
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////