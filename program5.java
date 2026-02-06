import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : ToggleBit
/// Description : Accept No. from user and toggle the content of First and last Nibble
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 06-Feb-2026
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

class program5
{
    static int ToggleBit(int iNo)
    {
        int FirstNibble = iNo & 0x0f;        
        int LastNibble  = (iNo & 0xf0) >> 4; 

        int Result = (FirstNibble << 4) | LastNibble;
        return Result;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int No = sobj.nextInt();

        int iRet = ToggleBit(No);
        System.out.println("Modified Number : " + iRet);

        sobj.close();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10      Output : 70
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////