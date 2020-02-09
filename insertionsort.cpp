#include <bits/stdc++.h>
using namespace std;

void insertionsort(int *a,int n){
	for(int i=0;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key) //move all the elements greater than the key to one position right
		{
				a[j+1]=a[j];
				j--;
		}
		a[j+1]=key;
	}
}

int main(){
	cout<<"size \n";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	insertionsort(a,n);
	for(int i:a)
	cout<<i<<" ";
	return 0;
}
