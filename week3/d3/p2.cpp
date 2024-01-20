class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
        int res=0;
        int arr[maxx+2]={0};
        for(int i=0;i<n;i++)
        {
            arr[L[i]]++;
            arr[R[i]+1]--;
        }
        for(int i=1;i<maxx+2;i++)
        {
            arr[i]+=arr[i-1];
        }
        for(int i=0;i<maxx+2;i++)
        {
            if(arr[i]>arr[res])
                res=i;
        }
        return res;
    }
};
