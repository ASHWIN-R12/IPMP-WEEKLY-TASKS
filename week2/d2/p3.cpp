class Solution{
	public:
   	int find(int n){
   	    float k = (-1 + sqrt(1+8*n))/2;
   	    if(floor(k)==ceil(k))
   	        return k;
   	    return -1;
   	}    
};
