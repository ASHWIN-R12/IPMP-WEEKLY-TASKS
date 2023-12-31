class Solution{
public:
    int isPrime(int N){
        int count=0;
        for(int i=1;i*i<=N;i++)
        {
            if(N%i==0)
            {
                count++;
                if((N/i)!=i)
                    count++;
            }
        }
        if(count==2)
            return 1;
        else
            return 0;
    }
};
