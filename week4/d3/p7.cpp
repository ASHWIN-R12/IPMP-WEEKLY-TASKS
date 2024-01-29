class Solution{   
public:
    int upper_bound(vector<int>& arr,int x)
    {
        int low=0;
        int high=arr.size()-1;
        int index=arr.size();
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]>x)
            {
                index=mid;
                high=mid-1;
                
            }
            else
            {
                low=mid+1;
            }
        }
        return index;
    }
    int countsmallequal(vector<vector<int>>&matrix,int r,int c,int x)
    {
        int count=0;
        for(int i=0;i<r;i++)
        {
            count += upper_bound(matrix[i],x);
        }
        return count;
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        int low=INT_MAX;
        int high=INT_MIN;
        for(int i=0;i<r;i++)
        {
            low=min(low,matrix[i][0]);
            high=max(high,matrix[i][c-1]);
        }
        int req=r*c/2;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(countsmallequal(matrix,r,c,mid)<=req)
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return low;
    }
};
