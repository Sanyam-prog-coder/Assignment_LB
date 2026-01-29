import java.io.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : CountFilesDireactories
/// Description : Count Total Files and Directories
/// Auther      ; Ravne Sanyam bhupendrakumar
/// Date        : 29-Jan-2026
/// 
///////////////////////////////////////////////////////////////////////////////

class program4 
{
    static void CountFilesDireactories(String dname)
    {
        File dir = new File(dname);
        int fCount = 0, dirCount = 0;

        if(dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File f : files)
            {
                if(f.isFile())
                {
                    fCount++;
                }
                else
                {
                    dirCount++;
                }
            }
            System.out.println("Total Files : "+fCount);
            System.out.println("Total Directories : "+dirCount);
        }
        else
        {
            System.out.println("Invalid Directories");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Directories : ");
        String dname = sc.nextLine();

        CountFilesDireactories(dname);
        sc.close();
    }
}
///////////////////////////////////////////////////////////////////////////////
/// 
/// Input : Marvellous  Output : Total Files : 2 Total Directories : 1
/// 
///////////////////////////////////////////////////////////////////////////////
