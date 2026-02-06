import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ToggleBit
/// Description : Accept No. from user & Toggle the 7th and 10th Bit Return the Modified Bit
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program4
{
    static int ToggleBit(int iNo)
    {
        int Mask1 = 1 << 6, Mask2 = 1 << 9;
        return (iNo ^ (Mask1) ^ (Mask2));
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        int iRet = ToggleBit(No);

        System.out.println("Toggle Number is : "+iRet);

        sobj.close();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 137     Output : 713
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////