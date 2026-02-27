import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Description : A Courier Counter Calculate Delivery cahrges
/// Auther      : Ravne Sanyam Bhupendrkumar
/// Date        : 27-Feb-2026
/// 
//////////////////////////////////////////////////////////////////////////////////////////////

class Courier
{
    public void calculate(int Weight)
    {
        int Charges = 0;

        if(Weight <= 1)
        {
            Charges = 50;
            System.out.println("Parcel Weight : "+Weight);
        }
        else if(Weight <= 5)
        {
            Charges = 50 + ((Weight - 1) * 20);
            System.out.println("Parcel Weight : "+Weight);
        }
        else
        {
            Charges = 150 + ((Weight - 5) * 30);
            System.out.println("Parcel Weight : "+Weight);
        }

        System.out.println("Courier Charges : "+Charges);
    }
}

class program3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Weight = 0;

        System.out.println("Enter the parcel weight : ");
        Weight = sobj.nextInt();
        
        if(Weight < 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        Courier cobj = new Courier();
        cobj.calculate(Weight);        
    }
}