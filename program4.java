import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChhBit
/// Description : Accept No. and Two Position from user and check the Bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////

class program4
{
    static boolean ChkBit(int iNo, int Pos1, int Pos2)
    {
        int Mask1 = 1 << (Pos1 - 1);
        int Mask2 = 1 << (Pos2 - 1);

        int Mask = Mask1 | Mask2;
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

        System.out.print("Enter First Position : ");
        int Pos1 = sobj.nextInt();

        System.out.print("Enter Second Position : ");
        int Pos2 = sobj.nextInt();

        boolean bRet = ChkBit(No, Pos1, Pos2);

        if(bRet == true)
        {
            System.out.println("Both Bits at " + Pos1 + " And " + Pos2 + " is ON");
        }
        else
        {
            System.out.println("Both Bits at " + Pos1 + " And " + Pos2 + " is OFF");
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10 Pos1 = 3 Pos2 = 7    Output = OFF
/// Input : 68 Pos1 = 3 Pos2 = 7    Output = ON
/// 
////////////////////////////////////////////////////////////////////////////////////////