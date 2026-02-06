import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChkBit
/// Description : Accept No.,Pos from user & check the given position bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program1 
{
    static boolean ChkBit(int iNo, int pos)
    {
        int Mask = 1 << pos - 1;
        int Result = iNo & Mask;

        if(Result == Mask)
        {
            return true;
        }        
        else
        {
            return false;
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        System.out.print("Enter Position : ");
        int Pos = sobj.nextInt();

        boolean bRet = ChkBit(No, Pos);

        if(bRet == true)
        {
            System.out.println(Pos+"Bit is ON");
        }
        else
        {
            System.out.println(Pos+"Bit is OFF");
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10  Position : 2        Output : 2th Bit is ON
/// Input : 9   Position : 2        Output : 2th Bit is OFF
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////