import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : Magic
/// Description : Determine the given matrix square is Magic or not 
/// Auther      : Ravne Sanyam Bhupendrkumar
/// Date        : 3-March-2026
/// 
/////////////////////////////////////////////////////////////////////////////////////

class Magic
{
    public void square(int N, int Arr[][])
    {
        int TargetSum = 0;
        int i = 0, j = 0;
        int RowSum = 0;
        int ColSum = 0, Diag1 = 0, Diag2 = 0;

        boolean isMagic = true;

        for(j = 0; j < N; j++)
        {
            TargetSum = TargetSum + Arr[0][j];
        }

        for(i = 0; i < N; i++)
        {
            RowSum = 0;   
            for(j = 0; j < N; j++)
            {
                RowSum = RowSum + Arr[i][j];
            }
            if(RowSum != TargetSum)
            {
                isMagic = false;
                break;
            }
        }

        if(isMagic)
        {
            for(j = 0; j < N; j++)
            {
                ColSum = 0;   
                for(i = 0; i < N; i++)
                {
                    ColSum = ColSum + Arr[i][j];
                }
                if(ColSum != TargetSum)
                {
                    isMagic = false;
                    break;
                }
            }
        }

        if(isMagic)
        {
            Diag1 = 0;
            for(i = 0; i < N; i++)
            {
                Diag1 = Diag1 + Arr[i][i];   
            }
            if(Diag1 != TargetSum) 
                isMagic = false;
        }

        if(isMagic)
        {
            Diag2 = 0;
            for(i = 0; i < N; i++)
            {
                Diag2 = Diag2 + Arr[i][N - 1 - i];
            }
            if(Diag2 != TargetSum) 
                isMagic = false;
        }

        if(isMagic)
        {
            System.out.println("Matrix is a magic square");
        }
        else
        {
            System.out.println("Matrix is not a magic square");
        }
    }
}

class program2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int N = 0;
        int i = 0, j =0;
        
        System.out.print("Size of Square Matrix : ");
        N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        int Arr[][] = new int[N][N];
        System.out.println("Each Element : ");

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        Magic mobj = new Magic();
        mobj.square(N, Arr);

        sobj.close();
    }
}