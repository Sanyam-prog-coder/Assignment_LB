import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Class       : Matrix
/// Description : Single class contains logic and main class class logic Function
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 21-Feb-2026
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
    /// Function    : AddDiagonal
    /// Description : Addition of Diagonals from given Matrix ( 2D ) Array
    /// 
    /////////////////////////////////////////////////////////////////////////////////////
    public int AddDiagonal()
    {
        int i = 0, j = 0;
        int iSum = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i] == Arr[j])
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Class       : program1
/// Description : This class Contains Entry point Function and Call the All logical 
//                Function 
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 21-Feb-2026
///  
/////////////////////////////////////////////////////////////////////////////////////
class program1
{
    public static void main(String[] args) 
    {
        Matrix mobj = new Matrix(4, 4);
        
        mobj.Accept();
        mobj.Display();

        System.out.println("Addition of Diagonal is : "+mobj.AddDiagonal());
    }
}
/////////////////////////////////////////////////////////////////////////////////////
/// 
/*   Input :    3	2	5	9	
                4	3	2	2	
                8	4	1	5	
                3	9	7	5	
     Output :   Addition of Diagonal : 12
*/
///
/////////////////////////////////////////////////////////////////////////////////////