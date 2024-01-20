class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int xr=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            xr=xr^arr[i];
            xr=xr^(i+1);
        }
        int number= xr & ~(xr-1);
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] & number)
            {
                one=one^arr[i];
            }
            else
            {
                zero=zero^arr[i];
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i & number)
            {
                one=one^i;
            }
            else
            {
                zero=zero^i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==zero)
            {
                count++;
            }
        }
        if(count==2) return {zero,one};
        return {one,zero};
    }
};
