import java.util.HashSet;
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : vote
/// Description : Counts valid and duplicate votes
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 28-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////////

class Voter
{
    public void vote(int N, Scanner sobj)
    {
        HashSet<Integer> Voterset = new HashSet<>();

        int Valivotes = 0;
        int Duplicatevotes  = 0;

        for(int i = 0; i < N; i++)
        {
            System.out.println("Voter Id : "+(i + 1));
            int ID = sobj.nextInt();

            if(ID < 0)
            {
                System.out.println("Invalid ID ");
                continue;
            }

            if(Voterset.contains(ID))
            {
                Duplicatevotes++;
            }
            else
            {
                Voterset.add(ID);
                Valivotes++;
            }
        }

        System.out.println("Valid Votes : "+Valivotes);
        System.out.println("Rejected Duplicate Votes : "+Duplicatevotes);
    }
}

class program2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Votes : ");
        int N = sobj.nextInt();

        if(N < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        Voter vobj = new Voter();
        vobj.vote(N, sobj);

        sobj.close();
    }
}