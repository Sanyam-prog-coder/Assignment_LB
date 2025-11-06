//////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : CheckPrime
// Description  : check whether number prime or not
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 06/11/2025
//////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPrime(int num)
    {
        if(num <= 1)
        {
            System.out.println(num + " is not a prime number.");
            return;
        }

        boolean BPrime = true;
        for(int i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                BPrime = false;
                break;
            }
        }

        if(BPrime)
            System.out.println(num + " is a prime number.");
        else
            System.out.println(num + " is not a prime number.");
    }
}

class AssignmentQ1
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.checkPrime(11);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 11   Output : 11 is a primr Number
//
//////////////////////////////////////////////////////////////////////////////////////////