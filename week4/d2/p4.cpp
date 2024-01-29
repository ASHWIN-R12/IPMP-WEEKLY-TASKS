int floorSqrt(int n)
{
    int low=1;
    int high=n;
    
    while(low<=high)
    {
        long long mid=low+(high-low)/2;
        long long val=mid*mid;
        if(val>n)
            high=mid-1;
        else 
        {
            low=mid+1;
        }
    }
    return high;
}
