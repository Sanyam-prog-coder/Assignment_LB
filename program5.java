import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Class       : Matrix
/// Description : Single class contains logic and main class class logic Function
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 22-Feb-2026
///  
/////////////////////////////////////////////////////////////////////////////////////
 
class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }
    /////////////////////////////////////////////////////////////////////////////////////
    /// 
    /// Function    : Accept
    /// Description : Accept input from user
    /// 
    /////////////////////////////////////////////////////////////////////////////////////
    void Accept()
    {
        int i = 0, j = 0;
        int iFreq = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements of Matrix");

        for(i = 0; i < iRow; i++)
        {
            System.out.println("Enter elements of row : "+(i+1));

            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        sobj.close();
    }
    /////////////////////////////////////////////////////////////////////////////////////
    /// 
    /// Function    : Display
    /// Description : Display output on Console
    /// 
    /////////////////////////////////////////////////////////////////////////////////////
    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements of Matrix Are : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////
    /// 
    /// Function    : CheckSparse 
    /// Description : Accept matrix from user & check whether the matrix with the 
    ///                majority of its element is equal to 0 OR not equal to 0
    /// 
    /////////////////////////////////////////////////////////////////////////////////////
    public boolean CheckSparse()
    {
        int i = 0, j = 0;
        int iZeroCount = 0;
        int iTotal = iRow * iCol;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                {
                    iZeroCount++;
                }
            }
        }

        if(iZeroCount > (iTotal / 2))
        {
            return true;    
        }
        else
        {
            return false;   
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Class       : program5
/// Description : This class Contains Entry point Function and Call the All logical 
//                Function 
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 21-Feb-2026
///  
/////////////////////////////////////////////////////////////////////////////////////
class program5
{
    public static void main(String[] args) 
    {
        Matrix mobj = new Matrix(4, 4);
        
        mobj.Accept();
        mobj.Display();

        if(mobj.CheckSparse() == true)
        {
            System.out.println("Matrix with the majority of its element is equal to 0");
        }
        else
        {
            System.out.println("Matrix with the majority of its element is not equal to 0");
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/*   Input :    1   0   0   0
                0   1   0   0
                0   0   1   0
                0   0   0   1
     Output : Matrix with the majority of its element is equal to 0

     Input :    1   2   3   4
                5   6   7   8
                9   0   1   0
                0   0   0   1
     Output : Matrix with the majority of its element is not equal to 0
*/
///
/////////////////////////////////////////////////////////////////////////////////////