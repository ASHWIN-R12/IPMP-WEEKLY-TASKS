long long int longestSubarry(long long int A[], long long int N) {
    
    long long int count=0;
    long long int maxi=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]>=0)
        {
            count++;
            if(count>maxi)
                maxi=count;
        }
        else
        {   
            
            count=0;
            
        }
    }
    return maxi;
    
}
