import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : OffBit 
/// Description : Accept No. from user & OFF the 7th and 10th Bit of that No. return Modified Number
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program2
{
    static int OffBit(int iNo)
    {
        int Mask1 = 1 << 6, Mask2 = 1 << 9;

        return (iNo & (~Mask1 & ~Mask2));
    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        int iRet = OffBit(No);

        System.out.println("Modifies Number is : "+iRet);

        sobj.close();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 577     Output : 1
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////