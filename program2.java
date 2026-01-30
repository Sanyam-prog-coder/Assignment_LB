import java.io.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : LargestFile
/// Description : Accept name of Directory & display the name of the Largest file
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class program2
{
    static void LargestFile(String fName)
    {
        File dir = new File(fName);

        if((dir.exists()) && dir.isDirectory())
        {
            File[] files = dir.listFiles();
            File largest = null;

            if(files != null)
            {
                for(File f : files)
                {
                    if(f.isFile())
                    {
                        if(largest == null || f.length() > largest.length())
                        {
                            largest = f;
                        }
                    }
                }
            }

            if(largest != null)
            {
                System.out.println("Largest File : "+largest.getName());
            }
            else
            {
                System.out.println("No files Found");
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

        LargestFile(path);
        
        sc.close();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : .   Output : program1.java
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////