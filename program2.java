import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : CommonBits
/// Description : Accept Two Number from User and Display the position of Common On bits 
/// Auther      : Ravne Sanyam Bhupendrakumar 
/// Date        : 06-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////

class program2
{
    static void CommonBits(int iNo1, int iNo2)
    {
        int Result = iNo1 & iNo2;
        int Pos = 1;

        while(Result != 0)
        {
            if((Result & 1) == 1)
            {
                System.out.print(Pos+" ");
            }
            Result = Result >> 1;
            Pos++;
        }
    }

    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter First Number : ");
        int No1 = sobj.nextInt();

        System.out.print("Enter Second Number : ");
        int No2 = sobj.nextInt();

        System.out.print("Common On Bits Are : ");
        CommonBits(No1, No2);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 10 11   Ouput : 2 4
/// 
/////////////////////////////////////////////////////////////////////////////////////////////