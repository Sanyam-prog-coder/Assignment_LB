/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : PrintDivisibleBy2and3
// Description  : To print all Number from 1 To N that are Divisible by 2 & 3
// Auther       : Sanyam BhupendraKumar Ravne 
// Dtae         : 09/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintDivisibleBy2and3(int num)
    {
        System.out.println("Number divisible by both 2 & 3 from 1 to " + num + " are :");

        int i = 0;

        for(i = 1; i <= num; i++)
        {
            if(i % 2 == 0 && i % 3 == 0)
            {
                System.out.println(i + "");
            }
        }
        System.out.println();
    }
}

class AssignmentQ5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.PrintDivisibleBy2and3(30);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 30   Output : 6  12  18  24  30  
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
