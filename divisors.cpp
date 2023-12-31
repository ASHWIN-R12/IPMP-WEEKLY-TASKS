class Solution {
  public:
    void print_divisors(int n) {
        vector<int> f;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                f.push_back(i);
                if((n/i) != i)
                    f.push_back(n/i);
            }
        }
        sort(f.begin(),f.end()); 
        for(auto i : f)
            cout<<i<<" ";
        
        
    }
};
