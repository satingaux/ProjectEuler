#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	int i=1;
	int sum=0;
	while(i<=n){
		sum+=pow(i,2);i++;
	}return sum;
}

int main(){
	int n=100;
	int a= sum(n);
	int b=pow((n*(n+1))/2,2);
	cout<<b-a;
	return 0;
}
