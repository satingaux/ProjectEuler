#include<bits/stdc++.h>
using namespace std;

bool isPallidrome(int x){
	int rev,rem=0;
	int org=x;
	rev=0;
	while(x){
		rem=x%10;
		rev=rev*10+rem;
		x/=10;
	}if(rev==org)
	return 1;
	else return 0;
}
int main(){
	int R, L=999;

	for(L=999;L>99;L--){
		R=999;
		while(R>99){
		if(isPallidrome(L*R)){
			cout<<L<<"*"<<R<<"="<<L*R<<"\n";break;
		}R--;
	}
	}
	return 0;
}
