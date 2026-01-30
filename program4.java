import java.io.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Function    : CreateBackup
/// Description : Accept file name & create backup with name original_backup.ext
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program4
{
    static void CreateBackup(String FileName) throws Exception
    {
        File file = new File(FileName);

        if(file.exists())
        {
            String backupName = FileName.replace(".", "_backup.");
            FileInputStream fin = new FileInputStream(file);
            FileOutputStream fout = new FileOutputStream(backupName);

            int ch = 0;
            while((ch = fin.read()) != -1)
            {
                fout.write(ch);
            }

            System.out.println("Backup File Created Successfully");

            fin.close();
            fout.close();
        }
        else
        {
            System.out.println("File does not exist");
        }
    }

    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter File Name : ");
        String fname = sobj.nextLine();

        CreateBackup(fname);

        sobj.close();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Input   : demo.txt
/// Output  : demo_backup.txt Created
///
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
