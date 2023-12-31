class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        vector<bool> ispf(n+1,true);
        vector<int> pf;
        for(int i=2;i<=n;i++)
        {
            if(ispf[i])
            {
                pf.push_back(i);
                for(int j=i*i;j<=n;j=j+i)
                {
                    ispf[j]=false;
                }
            }
        }
        return pf;
        
    }
};
