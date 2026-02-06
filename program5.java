import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : OnBit
/// Description : Accept No. from user & On first 4 Bit return Modified Number
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program5
{
    static int OnBit(int iNo)
    {
        int Mask = 0x0f;
        return (iNo | Mask);
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        int iRet = OnBit(No);

        System.out.println("Modified Number is : "+iRet);

        sobj.close();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 73      Output : 79
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////