#include<bits/stdc++.h>
using namespace std;

int prime(long long unsigned int n){
	int isPrime=1;
	for(long long unsigned int i=2;i<=n/2;i++){
		if(n%i==0){
//			cout<<"z="<<i;
			isPrime= 0;
			break;
		}
	}
	return isPrime;
}
int main(){
	long long unsigned int i,n=600851475143;
	
	for(i=2;i<n/2;i++){
		if(n%i==0 && prime(i)==1){
			{
			cout<<"\nprime factor:"<<i;
		}
//      cout<<i<<"\n";
	}
}
//   cout<<prime(11);
	return 0;
}
