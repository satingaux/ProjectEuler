#include<bits/stdc++.h>
using namespace std;

int main(){
	int x=1;
	int y=0;
	int sum=0;
	while(x<4000000){
		if(x%2==0)
		sum+=x;
		int t=x;
		x=x+y;
		y=t;
		
		
	}cout<<sum;
	return 0;
}
