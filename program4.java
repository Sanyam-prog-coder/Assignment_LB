import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChechOnOFF
/// Description : Check Weather the 7th,8th & 9th Bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////
 
class program4
{
    static void CheckOnOff(int A)
    {
        int Result1 = 0,Result2 = 0, Result3 = 0;
        int Mask1 = 0, Mask2 = 0, Mask3 = 0;

        Mask1 = 0x40;
        Mask2 = 0x80;
        Mask3 = 0x100;

        Result1 = A & Mask1;
        Result2 = A & Mask2;
        Result3 = A & Mask3;

        if (Result1 == Mask1 && Result2 == Mask2 && Result3 == Mask3)
        {
            System.out.println("7th,8th & 9th are ON");
        }
        else if (Result1 == Mask1)
        {
            System.out.println("7th Bit is ON");
        }
        else if (Result2 == Mask2)
        {
            System.out.println("8th Bit is ON");
        }
        else if (Result3 == Mask3)
        {
            System.out.println("9th Bit is ON");
        }
        else
        {
            System.out.println("7th,8th & 9th are OFF");
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
/// Input : 128         Output : 8th Bit is ON
/// Input : 256         Output : 9th Bit is ON
/// Input : 448         Output : 7th,8th & 9th Bit are ON
/// Input : 16          Output : 7th,8th & 9th Bit are OFF
/// 
/////////////////////////////////////////////////////////////////////////////////////