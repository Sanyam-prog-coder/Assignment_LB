import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : calling
/// Description : A telecom Company bills Call bassed on slab on Given Call Duration
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 28-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////////

class Telecom
{
    public void calling(int Time)
    {
        int Charges = 0;

        if(Time <= 5)
        {
            Charges = 0;
        }
        else if(Time <= 10)
        {
            Charges = (Time - 5) * 1;
        }
        else
        {
            Charges = (5 * 1) + (Time - 10) * 2;
        }

        System.out.println("Call Duration : "+Time);
        System.out.println("Total Call Charges : "+Charges);
    }
}
class program5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Duration = 0;

        System.out.print("Call Duration in minutes : ");
        Duration = sobj.nextInt();

        if(Duration <= 0)
        {
            System.out.println("Invalid Input !");
            sobj.close();
            return;
        }

        Telecom tobj = new Telecom();
        tobj.calling(Duration);

        sobj.close();
    }
}