#include<iostream>
using namespace std;

int main() {
	int n,ld;
	int rev=0;
	cin >> n;
	while(n>0)
	{
		ld=n%10;
		n=n/10;
		rev = rev*10+ld;
	}

	cout<< rev;
	
}
