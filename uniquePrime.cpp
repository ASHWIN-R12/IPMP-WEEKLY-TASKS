class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    vector<int> pf;
	    int flag;
	    for(int i=2;i*i<=N;i++)
	    {
	        flag= 0;
	        while(N%i==0)
	        {   
	            N=N/i;
	            if(flag==1)
	                continue;
	            pf.push_back(i);
	            flag=1;
	            
	        }
	            
	    }
	    if(N>1)
	        pf.push_back(N);
	    return pf;
	}
};
