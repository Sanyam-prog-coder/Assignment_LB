import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : 
/// Description : Accept No. from user and Count No. of ON bits Without Using '%' '/' 
/// Auther      : Ravne Sanyam Bhupendrakumar 
/// Date        : 06-Feb-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////////////

class program1
{
    static int CountOne(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            if((iNo & 1) == 1)
            {
                iCount++;
            }
            iNo = iNo >> 1;
        }
        return iCount;
    }

    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.err.print("Enter Number : ");
        int No = sobj.nextInt();

        int iRet = CountOne(No);

        System.out.println("Number of ON bits : "+iRet);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Input : 11  Output : 3
/// 
/////////////////////////////////////////////////////////////////////////////////////////////