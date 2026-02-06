import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : OffBit 
/// Description : Accept No. from user & OFF the 7th Bit of that No. return Modified Number
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program1
{
    static int OffBit(int iNo)
    {
        int Mask = 1 << 6;
        return (iNo & (~Mask));
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
/// Input : 79  Output : 15
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////