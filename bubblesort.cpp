#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"size \n";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]<a[j+1])
			swap(a[j],a[j+1]);
		}
	}
	for(int i:a)
	cout<<i<<" ";
	return 0;	
}
