#include <iostream>
#include <bits/stdc++.h>
#define foi(n) for(int i=0;i<n;i++)
#define fast ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0) 
using namespace std;

int main(){
	fast;	
	long long int n;
	cin>>n;	
	bool prime[n];
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<n;i++){
		if(!prime[i]) continue;
		for(int p=i*i;p<=n;p+=i){
			if(prime[p])
				prime[p]=false;
			}
		}
	for(int i=2;i<n;i++)
		if(prime[i])	cout<<i<<" ";
			
	return 0;
	}
// Step 1. Initiaslise a boolean array with index to specify the numbers
// Step 2. Starting from 2 keep track of all the multiples that are greater
//than the SQUARE of the selected prime because all the numbers before the
//SQUARE of the numbers are already striked out
// Step 3. Run the main loop only until the SQUARE-ROOT of the selected
//integer as the integeres greater than the SQUARE-ROOT are already checked
//for and are only repetetions 
