import java.util.Scanner;

class program3
{
    public static boolean isPathAvailable(int grid[][], int r, int c, int i , int j)
    {
        if(i >= r || j >= c)
        {
            return false;
        }

        if(grid[i][j] == -1)
        {
            return false;
        }

        if(i == r -1 && j == c - 1)
        {
            return true;
        }

        if(isPathAvailable(grid, r, c, i, j + 1))
        {
            return true;
        }

        if(isPathAvailable(grid, r, c, i + 1, j))
        {
            return true;
        }
        return false;
    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int R = 0, C = 0, i = 0, j = 0;

        System.out.print("First line : ");
        R = sobj.nextInt();

        System.out.print("Second line : ");
        C = sobj.nextInt();

        int Grid[][] = new int[R][C];

        for(i = 0; i < R; i++)
        {
            for(j = 0; j < C; j++)
            {
                Grid[i][j] = sobj.nextInt();
            }
        }

        if(isPathAvailable(Grid, R, C, 0, 0))
        {
            System.out.println("Path Available");
        }
        else
        {
            System.out.println("No Path Found");
        }

        sobj.close();
    }
}