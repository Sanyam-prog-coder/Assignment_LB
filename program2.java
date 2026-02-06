import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : OffBit
/// Description : Accept No.,Pos From user and OFF that bit return Modified number
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program2
{
    static int OffBit(int iNo, int pos)
    {
        int Mask = 1 << pos -1;
        int Result = iNo & ~Mask;

        return Result;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        System.out.print("Enter Position : ");
        int pos = sobj.nextInt();

        int iRet = OffBit(No, pos);

        System.out.println("Modified Number is : "+iRet);

        sobj.close();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10  Position : 2    Output : 8
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////