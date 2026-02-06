import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : OnBit
/// Description : Accept No.,Pos From user and ON that bit return Modified number
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program3
{
    static int OnBit(int iNo, int pos)
    {
        int Mask = 1 << (pos -1);
        int Result = iNo | Mask;

        return Result;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        System.out.print("Enter Position : ");
        int pos = sobj.nextInt();

        int iRet = OnBit(No, pos);

        System.out.println("Modified Number is : "+iRet);

        sobj.close();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10  Position : 3    Output : 14
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////