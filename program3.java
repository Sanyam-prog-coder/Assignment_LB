import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ToggleBit
/// Description : Accept No. from user & toggle the 7th Bit of that Number Return Modified Number
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program3
{
    static int ToggleBit(int iNo)
    {
        int Mask = 1 << 6;
        return (iNo ^ Mask);
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
/// Input : 137     Output : 201
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////