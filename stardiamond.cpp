#include <iostream>
using namespace std;

void nStarDiamond(int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }

        for(int k=2*i+1;k>0;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-i-1;j>0;j--)
        {
            cout<<" ";
        }

        for(int k=2*i+1;k>0;k--)
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
    nStarDiamond(n);
    return 0;
}