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
    /// Function    : CheckIdentity 
    /// Description : Accept matrix from user & check whether the matrix is identified 
    ///                 or Not identified
    /// 
    /////////////////////////////////////////////////////////////////////////////////////
    public boolean CheckIdentity()
    {
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] != 1)
                    {
                        return false;
                    }
                }
                else
                {
                    if(Arr[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Class       : program4
/// Description : This class Contains Entry point Function and Call the All logical 
//                Function 
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 21-Feb-2026
///  
/////////////////////////////////////////////////////////////////////////////////////
class program4
{
    public static void main(String[] args) 
    {
        Matrix mobj = new Matrix(4, 4);
        
        mobj.Accept();
        mobj.Display();

        if(mobj.CheckIdentity() == true)
        {
            System.out.println("Matrix is Identified");
        }
        else
        {
            System.out.println("Matrix is not Identified");
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/*   Input :    1   0   0   0
                0   1   0   0
                0   0   1   0
                0   0   0   1
     Output : Matrix is Identified
     Input :    1   0   0   0
                0   1   0   0
                0   1   0   0
                0   0   0   1
     Output : Matrix is not Identified
*/
///
/////////////////////////////////////////////////////////////////////////////////////