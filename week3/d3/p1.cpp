class Solution{
    public:
    int maxOnes(int a[], int n)
    {   int sum=0;
        int maxi=INT_MIN;
        int start;
        int l=-1;
        int r=-1;
        int count=0;
        for(int i=0;i<n;i++)
        {   
            if(sum==0)
            {
                start=i;
            }
            if(a[i]==1)
            {
                sum+=-1;
            }
            else if(a[i]==0)
            {
                sum+=1;
            }
            if(sum>maxi)
            {
                maxi=sum;
                l=start;
                r=i;
            }
            if(sum<0)
            {
                sum=0;
            }
            
        }
        if(maxi<0)
        {
            l=-1;
            r=-1;
        }
        for(int i=0;i<n;i++)
        {
            if(i>=l && i<=r)
            {
                if(a[i]==0)
                    count++;
            }
            else
            {
                if(a[i]==1)
                    count++;
            }
        }
        return count;
    }
};
