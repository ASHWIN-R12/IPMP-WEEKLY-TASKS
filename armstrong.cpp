#include<bits/stdc++.h>
bool checkArmstrong(int n){
	int ld;
	int cd=0;
	int sum=0;
	int dup=n;
	int dup2=n;

	while(n>0)
	{
		cd++;
		n=n/10;
	}
	while(dup>0)
	{
		ld=dup%10;
		sum += pow(ld,cd);
		dup=dup/10;
	}
	if(sum==dup2)
		return true;
	else	
		return false;
}
