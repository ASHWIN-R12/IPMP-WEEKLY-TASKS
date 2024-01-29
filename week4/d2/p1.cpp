#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int index=-1;
    int ans=INT_MAX;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[high])
        {
            if(ans>arr[low])
            {
                ans=arr[low];
                index=low;
            }
            break;
        }
        if(arr[low]<=arr[mid])
        {
            if(ans>arr[low])
            {
                ans=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else
        {
            if(ans>arr[mid])
            {
                ans=arr[mid];
                index=mid;
            }
            high=mid-1;
        }
    }
    return index;

}
