class Solution{
	public:
	
	int SumofDigits(int A, int B)
	{
	  long long int n= power(A,B);
	  return f(n);
	}
	
	long long int power(int a, int b) {
        long long int base = a;
        long long int ans = 1;
        while (b) {
            if (b % 2 == 0) {
                base = base * base;
                b = b / 2;
            } else {
                ans = ans * base;
                b = b - 1;
            }
        }
        return ans;
    }

	
	int f(long long int n)
	{
	   if(n<10)
	    return n;
	   else
	    return f(sum_of_digits(n));
	}
	
	long long int sum_of_digits(long long int n)
	{
	    if(n==0)
	        return 0;
	   return (n%10)+sum_of_digits(n/10);
	}
	
	
};
