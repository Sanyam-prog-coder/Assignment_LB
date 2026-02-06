import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChechOnOFF
/// Description : Check Weather the 7th,15th,21th & 28th Bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////
 
class program3
{
    static void CheckOnOff(int A)
    {
        int Result1 = 0,Result2 = 0, Result3 = 0, Result4 = 0;
        int Mask1 = 0, Mask2 = 0, Mask3 = 0, Mask4 = 0;

        Mask1 = 0x40;
        Mask2 = 0x4000;
        Mask3 = 0x100000;
        Mask4 = 0x8000000;

        Result1 = A & Mask1;
        Result2 = A & Mask2;
        Result3 = A & Mask3;
        Result4 = A & Mask4;

        if (Result1 == Mask1 && Result2 == Mask2 && Result3 == Mask3 && Result4 == Mask4)
        {
            System.out.println("7th,15th,21th & 28th are ON");
        }
        else if (Result1 == Mask1)
        {
            System.out.println("7th Bit is ON");
        }
        else if (Result2 == Mask2)
        {
            System.out.println("15th Bit is ON");
        }
        else if (Result3 == Mask3)
        {
            System.out.println("21th Bit is ON");
        }
        else if (Result4 == Mask4)
        {
            System.out.println("28th Bit is ON");
        }
        else
        {
            System.out.println("7th,15th,21th & 28th are OFF");
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
/// Input : 64          Output : 7th Bit is ON
/// Input : 16384       Output : 15th Bit is ON
/// Input : 1048576     Output : 21th Bit is ON
/// Input : 134217728   Output : 28th Bit is ON
/// Input : 135282752   Output : 7th 15th 21th & 28th Bit Are ON
/// Input : 270565504   Output : 7th 15th 21th & 28th Bit Are OFF
/// 
/////////////////////////////////////////////////////////////////////////////////////