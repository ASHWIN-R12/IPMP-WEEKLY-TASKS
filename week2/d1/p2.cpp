class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    
		    for(int i=0;i<(1<<s.size());i++)
		    {   
		        string par="";
		        for(int bit=0;bit<s.size();bit++)
		        {
		            if((1<<bit)&i)
		                par=par+s[bit];
		        }
		      
		        if(par!="")
		            ans.push_back(par);
		    }
		    
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
