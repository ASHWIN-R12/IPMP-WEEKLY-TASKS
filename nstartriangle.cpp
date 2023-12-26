#include <iostream>
using namespace std;

void nStarTriangle(int n) {

    for(int i=n-1;i>=0;i--)
    {   
        for(int k=n-i-1;k>0;k--)
        {
            cout<<" ";
        }
            

        for(int j=2*i+1;j>0;j--)
        {
            cout<<"*";
        }
            

        cout<<endl;
    }
}

int main()
{   
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;
}