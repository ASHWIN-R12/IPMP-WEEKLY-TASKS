class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        int xor1=0;
        int xor2=0;
        int xor3=0;
        int count=0;
        vector<long long int> v;
        
        for(int i=0;i<N;i++)
        {
            xor1 = xor1^Arr[i];
            
        }
        
        while(xor1)
        {
            if(xor1&1)
                break;
            count++;
            xor1=xor1>>1;
        }
        
        for(int i=0;i<N;i++)
        {
            if(Arr[i]&(1<<count))
                xor2=xor2^Arr[i];
            else
                xor3=xor3^Arr[i];
        }
        
        v.push_back(xor2);
        v.push_back(xor3);
        sort(v.begin(),v.end(),greater<int>());
        return v;
        
        
    }
};
