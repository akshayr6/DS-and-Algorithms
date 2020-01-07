#include <iostream>
#include <bits/stdc++.h>
#define foi(n) for(int i=0;i<n;i++)
#define fast ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0) 
using namespace std;

int main(){
	fast;	
	long long int no,n;
	cin>>no;
	bool prime[no];
	memset(prime,false,sizeof(prime));
	for(int x=1;x*x<=no;x++)
	for(int y=1;y*y<no;y++)
	{
		n=4*x*x+y*y;
		//if((n%12==1)||(n%12==5)&&(n<=no))  this give core dumped error 
		//watch out for it correct paranthesis for operator precedence
		if((n%12==1 || n%12==5) && (n<=no))
			prime[n]=true;
		
		n=3*x*x+y*y;
		if(n%12==7 && n<no)
			prime[n]=true;
		
		n=3*x*x-y*y;
		if(n%12==11 && x>y  && n<no)
			prime[n]=true;
	}
		
		for(int i=5;i*i<no;i++)
		    if(prime[i])
			for(int p=i*i;p<no;p+=i*i)
				prime[p]=false;
		
		cout<< 2<<endl<< 3 <<endl;
		for(int i= 5;i<no;i++){
			if(prime[i]) cout<<i<<endl;
		}
	return 0;
}

//Step 1. Initialise a boolean array with indexes representing the numbers to false
//Step 2. In order to omit the checking for the multiples of 2 and 3  we 
//need to check for the modulo-sixty remainder (2*2*3*5)to check for 2,3
//and 5 multiples or the modulo-twelve remainder (2*2*3) which checks for 
//2 and 3 multiples using the specified quadratic functions 4x^2+y^2 , 3x^2+y^2,
//and 3x^2-y^2. If the functions satisfy flip the numbers to true to declare them as prime
//Step 3. Run a regular sieve of erathosthenes style multiple strike out 
//starting from 5 and stoping until the SQUARE-ROOT of the selected integer same as the
//sieve of erathosthenes  
