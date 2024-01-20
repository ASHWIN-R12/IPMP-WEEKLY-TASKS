class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> res;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>=maxi)
            {
                res.push_back(a[i]);
                maxi=a[i];
            }

         }
         sort(res.begin(),res.end(),greater<int>());
         return res;
        
    }
};
