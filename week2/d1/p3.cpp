class Solution{
public:	
	// Function for finding maximum and value pair
	int maxAND (int arr[], int n)
	{   
	    int res=0;
	    int mask=0;
	    int count;
	    for(int i=31;i>=0;i--)
	    {
	        count=0;
	        for(int j=0;j<n;j++)
	        {
	            mask=(1<<i)|res;
	            if((mask&arr[j])==mask)
	                count++;
	        }
	        if(count>=2)
	            res=res|mask;
	    }
	    return res;
	}
};
