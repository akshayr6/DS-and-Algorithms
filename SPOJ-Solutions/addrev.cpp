#include <bits/stdc++.h>
using namespace std;

void trail(long long int &num){
	while(num%10==0){
		num=num/10;
		}
	}
void rev(long long int &num){
	long long int temp=0;
	while(num!=0){
		temp=(temp*10)+num%10;
		num=num/10;
		}
		num=temp;
	}
int main(){
	long long int tc,a,b,sum;
	cin>>tc;
	while(tc--){
	cin>>a>>b;
	trail(a);
	trail(b);
	rev(a);
	rev(b);
	sum=a+b;
	rev(sum);
	cout<<sum<<endl;
	}	
	return 0;
	}
