import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChechOnOFF
/// Description : Check Weather the 15th Bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 05-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////
 
class program1
{
    static void CheckOnOff(int A)
    {
        int Result = 0, Mask = 0;

        Mask = 0x00004000;
        Result = 0;

        Result = A & Mask;

        if(Result == Mask)
        {
            System.out.print("15th Bit is ON");
        }
        else
        {
            System.out.print("15th Bit is OFF");
        }

    }
    public static void main(String A[]) 
    {
        int No = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number");
        No = sobj.nextInt();

        CheckOnOff(No);
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input   : 16384     Output  : 15th Bit is ON
/// Input   : 8192      Output  : 15th Bit is OFF
/// 
/////////////////////////////////////////////////////////////////////////////////////