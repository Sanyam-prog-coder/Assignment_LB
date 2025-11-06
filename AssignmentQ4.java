/////////////////////////////////////////////////////////////////////////
//
// Function     : Findmin
// Description  : Find the Minimum of three Number
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//
/////////////////////////////////////////////////////////////////////////
 
class Logic
{
    void FindMin(int a, int b, int c)
    {
        int min = a;

        if(b < min)
            min = b;
        if(c < min)
            min = c;

        System.out.println("Minimum number is: " + min);
    }
}
class AssignmentQ4
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.FindMin(3,7,2);
    }
}
/////////////////////////////////////////////////////////////////////////
// 
// Input : 3 Input : 7 Input : 2    Output : 2
//
/////////////////////////////////////////////////////////////////////////