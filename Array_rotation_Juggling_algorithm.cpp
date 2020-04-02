#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[6]={1,2,3,4,5,6};
	int n=6,d=5;
	int gcd= __gcd(n,d);
	for( int i=0;i<gcd;i++)
	{
		int j=i,m=0;
		int temp=a[i];
		while(1)
		{
			m=(j+d)%n;
			if(m==i)
			break;
			a[j]=a[m];
			j=m;
		}
		a[j]=temp;
	}
	for(int i:a)
	cout<< i<< "\t";
	return 0;
}
