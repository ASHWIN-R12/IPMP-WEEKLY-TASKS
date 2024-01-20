class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int count;
        int n= intervals.size();
        for(int i=0;i<n;i++)
        {
            if(intervals[i][1]<newInterval[0])
            {
                ans.push_back(intervals[i]);
            }
            else if(intervals[i][0]<=newInterval[1])
            {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
            else
            {      
                count=i;
                break;
            }
        }
        ans.push_back(newInterval);
        for(int i=count;i<n;i++)
        {
             ans.push_back(intervals[i]);
        }
        return ans;

        
    }
};
