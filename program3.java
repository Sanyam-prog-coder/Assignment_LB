import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChkBit
/// Description : Accept No. from User and Check 9th, 12th bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////

class program3
{
    static boolean ChkBit(int iNo)
    {
        int Mask = 0x900;

        if((iNo & Mask) != 0)
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

        System.out.print("Enter First Number : ");
        int No = sobj.nextInt();

        boolean bRet = ChkBit(No);

        if(bRet == true)
        {
            System.out.println("9th & 12th Bit is ON");
        }
        else
        {
            System.out.println("9th & 12th Bit is OFF");
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 257     Output : 9th & 12th Bit is ON
/// Input : 4608    Output : 9th & 12th Bit is OFF
/// 
////////////////////////////////////////////////////////////////////////////////////////