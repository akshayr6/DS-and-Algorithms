#include <bits/stdc++.h>
using namespace std;

void sieve(vector<int> &prime, long long int limit){
	bool primecheck[limit+1];
	memset(primecheck,true,sizeof(primecheck));
	for(int i=2;i*i<=limit;i++){
		if(!primecheck[i]) continue;
		for(int p=i*2;p<=limit;p+=i){
			if(primecheck[p])
				primecheck[p]=false;
			}
		}
	for(int i=2;i<limit;i++)
		if(primecheck[i])	prime.push_back(i);
	//for(auto it=prime.begin();it!=prime.end();it++) cout<<*it<<endl;
	}	
int main(){
	long long int count,near,limit,tc,start,end;
	cin>>tc;
	while(tc--){
		cin>>start;
		cin>>end;
		vector<int> primes;
		limit = floor(sqrt(end))+1;//try +1 
		sieve(primes,limit);
		count=end-start+1;
		bool segsieve[count];
		memset(segsieve,true,sizeof(segsieve));
		for(auto it=primes.begin();it!=primes.end();it++)
		{
				near=(floor(start/(*it))*(*it));
				if(near<start) near+=*it;
				if(near==*it) near+=*it;
				for(int i=near;i<=end;i+=*it)
				{
						segsieve[i-start]=false;
				}
		}
		for(int i=0;i<sizeof(segsieve);i++)
		{
			if((i+start)<2) continue;
			if(	segsieve[i]) cout<<i+start<<endl;
		}
		}
	return 0;
	}
