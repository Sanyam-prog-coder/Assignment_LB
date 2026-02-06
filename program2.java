import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChechOnOFF
/// Description : Check Weather the 5th & 18th Bit is ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 05-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////
 
class program2
{
    static void CheckOnOff(int A)
    {
        int Result1 = 0,Result2 = 0, Mask1 = 0, Mask2 = 0;

        Mask1 = 0x10;
        Mask2 = 0x40000;

        Result1 = A & Mask1;
        Result2 = A & Mask2;

        if (Result1 == Mask1 && Result2 == Mask2)
        {
            System.out.println("5th & 18th Bit are ON");
        }
        else if (Result1 == Mask1)
        {
            System.out.println("5th Bit is ON");
        }
        else if (Result2 == Mask2)
        {
            System.out.println("18th Bit is ON");
        }
        else
        {
            System.out.println("5th & 18th Bit are OFF");
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
/// Input : 16      Output : 5th Bit is ON
/// Input : 262144  Output : 18th Bit is ON
/// Input : 262160  Output : 5th & 18th Bit ON
/// Input : 524320  Output : 5th & 18 Nit is OFF
/// 
/////////////////////////////////////////////////////////////////////////////////////