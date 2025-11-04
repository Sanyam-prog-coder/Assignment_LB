//////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CalculateSum
// Description  : Calculate the dum of N natural Number
// Auther       : Sanyam Bhupendrakuamr Ravne
// Date         : 04/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void calculateSum(int n)
    {
        int Sum = 0;
        for(int i = 1; i <= n; i++)
        {
            Sum = Sum + i;
        }
        System.out.println("Sum of First"+ n + "Natural number is : "+ Sum);
    }
}
class AssignmentQ1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 10       Output : 55
//
//////////////////////////////////////////////////////////////////////////////////////////