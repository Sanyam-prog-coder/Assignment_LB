import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CopyDirectory
/// Description : Accept source & destination directory and copy all files
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program3
{
    static void CopyDirectory(String SrcDir, String DestDir) throws Exception
    {
        File src = new File(SrcDir);
        File dest = new File(DestDir);

        if(!dest.exists())
        {
            dest.mkdir();
        }

        File files[] = src.listFiles();

        for(File f : files)
        {
            if(f.isFile())
            {
                FileInputStream fin = new FileInputStream(f);
                FileOutputStream fout = new FileOutputStream(dest + "/" + f.getName());

                int ch = 0;
                while((ch = fin.read()) != -1)
                {
                    fout.write(ch);
                }

                fin.close();
                fout.close();
            }
        }

        System.out.println("All Files Copied Successfully");
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Source Directory : ");
        String src = sobj.nextLine();

        System.out.print("Enter Destination Directory : ");
        String dest = sobj.nextLine();

        CopyDirectory(src, dest);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : SourceDir , DestDir
/// Output  : All Files Copied Successfully
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
