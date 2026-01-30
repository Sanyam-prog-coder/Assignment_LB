import java.io.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : CalculateSize
/// Description : Accept the Directory & Calculate the Total size of all files from that Directory
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class program1 
{
    static void CalculateSize(String dirname)
    {
        File dir = new File(dirname);

        if((dir.exists()) && (dir.isDirectory()))
        {
            long Totalsize = 0;

            File[] files = dir.listFiles();

            if(files != null)
            {
                for( File f : files)
                {
                    if(f.isFile())
                    {
                        Totalsize += f.length();
                    }
                }
            }
            System.out.println("Total Size of Files : "+ Totalsize + " bytes");
        }
        else
        {
            System.out.println("Invalid Directory");
        }
    }
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Directory Name : ");
        String dname = sc.nextLine();

        CalculateSize(dname);

        sc.close();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : Marvellous    Output : Total Size of Files : 0 bytes
/// Input   : .             Output : Total Size of Files : 971 bytes
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////