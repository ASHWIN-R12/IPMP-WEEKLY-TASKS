class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i;
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]==0)
	        {
	            i=j;
	            break;
	        }
	    }
	    
	    for(int j=i+1;j<n;j++)
	    {
	        if(arr[j]!=0)
	        {
	            swap(arr[i],arr[j]);
	            i++;
	        }
	    }
	}
};
