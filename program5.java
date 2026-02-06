import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ChkBit
/// Description : Check Weather the First & Last Bit ON or OFF
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////

class program5
{
    static void ChkBit(long A)
    {
        long Mask1 = 0, Mask2 = 0;
        long Result1 = 0, Result2 = 0;

        Mask1 = 0x1;
        Mask2 = 0x80000000L;

        Result1 = A & Mask1;
        Result2 = A & Mask2;

        if(Result1 == Mask1 && Result2 == Mask2)
        {
            System.out.println("First & Last Bit is ON");
        }
        else if(Result1 == Mask1)
        {
            System.out.println("First Bit is ON");
        }
        else if(Result2 == Mask2)
        {
            System.out.println("Last Bit is ON");
        }
        else
        {
            System.out.println("First & Last Bit is OFF");
        }
    }

    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the Number : ");
        long No = sobj.nextLong();

        ChkBit(No);
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 1           Output : First Bit is ON
/// Input : 2147483648  Output : Last Bit is ON
/// Input : 2147483649  Output : First & Last Bit Are On
/// Input : 0           Output : First & Last Bit Are OFF
/// 
/////////////////////////////////////////////////////////////////////////////////////

// L is the Suffix 