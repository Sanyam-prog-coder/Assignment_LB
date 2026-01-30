import java.io.File;
import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : CheckPath
/// Description : Accept path from user and check whether it exists.
///               If exists, display whether it is file or directory.
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 30-Jan-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class program5
{
    static void CheckPath(String path)
    {
        File fobj = new File(path);

        if (fobj.exists())
        {
            if (fobj.isFile())
            {
                System.out.println("Path exists and it is a File");
            }
            else if (fobj.isDirectory())
            {
                System.out.println("Path exists and it is a Directory");
            }
        }
        else
        {
            System.out.println("Path does not exist");
        }
    }

    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Path : ");
        String path = sc.nextLine();

        CheckPath(path);

        sc.close();
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input  : Path
/// Output : Displays whether path exists and its type
/// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
