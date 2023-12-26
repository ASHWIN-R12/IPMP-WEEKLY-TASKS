#include <iostream>
using namespace std;

void symmetry(int n) {
    
    for(int i=n-1;i>=0;i--)
    {
        for(int p=n-i;p>0;p--)
            cout<<"* ";
        for(int q=2*i-1;q>0;q--)
            cout<<"  ";
        for(int r=n-i;r>0;r--)
            cout<<"* ";
        cout<<endl;
        
    }

    for(int i=1;i<n;i++)
    {
        for(int p=n-i;p>0;p--)
            cout<<"* ";
        for(int q=2*i-1;q>0;q--)
            cout<<"  ";
        for(int r=n-i;r>0;r--)
            cout<<"* ";
        cout<<endl;
        
    }
}

int main()
{   
    int n;
    cin>>n;
    symmetry(n);
    return 0;
}