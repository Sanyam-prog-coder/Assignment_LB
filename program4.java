import java.io.FileInputStream;
import java.util.Scanner;
import java.util.zip.CRC32;

////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChecckSum
/// Description : Calculate chechsum of a file
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 24-Jan-2026
/// 
////////////////////////////////////////////////////////////////////////////

public class program4 
{
    static void CheckSum(String fname) throws Exception
    {
        FileInputStream fin = new FileInputStream(fname);
        CRC32 crc = new CRC32();

        int ch;
        while((ch = fin.read()) != -1)
        {
            crc.update(ch);
        }

        System.out.println("CheckSum : "+crc.getValue());
        fin.close();
    }

    public static void main(String A[]) throws Exception
    {
        Scanner sc  = new Scanner(System.in);

        System.out.print("Enter File name : ");
        String fname = sc.nextLine();

        CheckSum(fname);
    }
}
////////////////////////////////////////////////////////////////////////////
/// 
/// Input   :   program1.java
/// Output   :   2400126184
/// 
////////////////////////////////////////////////////////////////////////////