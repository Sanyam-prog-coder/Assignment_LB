import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ToggleBits
/// Description : Accept No. Start & End Position from user and Toggle all the Bits 
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////

class program5
{
    static int ToggleBits(int iNo, int Start, int End)
    {
        int Mask = 0;

        for(int i = Start; i <= End; i++)
        {
            Mask = Mask | (1 << (i -1));
        }
        int Result = iNo ^ Mask;
        return Result;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        System.out.print("Enter Start Position : ");
        int SPos = sobj.nextInt();

        System.out.print("Enter End Position : ");
        int EPos = sobj.nextInt();

        int iRet = ToggleBits(No, SPos, EPos);

        System.out.println("Toggled Position is : "+iRet);
    }
}
////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10  Start = 2   End = 4     Output = 4
/// 
////////////////////////////////////////////////////////////////////////////////////////