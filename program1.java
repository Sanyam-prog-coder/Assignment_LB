import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : Customer
/// Description : Calculate Hotel Customer Bill hotel gives Discount to retains Customer
/// Auther      : Ravne Sanyam Bhupendrakuamr
/// Date        : 28-Feb-2026
/// 
////////////////////////////////////////////////////////////////////////////////////////////

class Hotel
{
    public void Customer(int Stay)
    {
        int Amount = 0;
        int Discount = 0;
        int Charges = 3000;

        if(Stay <= 7)
        {
            Amount = Charges * Stay;
        }
        else if(Stay > 7)
        {
            Amount = (Charges * Stay);
            Discount = Amount * 5 / 100;
            Amount = Amount - Discount;
        }

        System.out.println("Total Stay Duration : "+Stay);
        System.out.println("Final Bill Amount : "+Amount);
    }
}

class program1
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Days = 0;

        System.out.print("Number of Days Stayed : ");
        Days = sobj.nextInt();

        if(Days <= 0)
        {
            System.out.println("INvalid Input !");
            sobj.close();
            return;
        }

        Hotel hobj = new Hotel();
        hobj.Customer(Days);

        sobj.close();
    }
}