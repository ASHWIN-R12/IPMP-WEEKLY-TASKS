class Solution{
public:
    long long int factorial(int N){
        long long fact=1;
        for(int i=N;i>=1;i--)
        {
            fact=fact*i;
        }
        return fact;
        
    }
};
