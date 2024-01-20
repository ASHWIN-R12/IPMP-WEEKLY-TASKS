class Solution{
public:
    void count(int ind,int &c,vector<char> &ds,string s1, string s2,int n)
    {   
        if(ind==n)
        {   string dup="";
            for(auto it : ds)
            {
                dup = dup + it;
            }
            if(dup == s2)
                c++;
            return;
        }      
        ds.push_back(s1[ind]);
        count(ind+1,c,ds,s1,s2,n);
        ds.pop_back();
        count(ind+1,c,ds,s1,s2,n);
    }
    
    int countWays(string S1, string S2){
        vector<char> ds;
        int c=0;
        count(0,c,ds,S1,S2,S1.size());
        return c;
        
    }
};
