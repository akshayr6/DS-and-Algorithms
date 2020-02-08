#include <bits/stdc++.h>
using namespace std;

void selectionsort(int *a,int n){
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		swap(a[i],a[min]);
	}
}

int main(){
	cout<<"size \n";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	selectionsort(a,n);
	for(int i:a)
	cout<<i<<" ";
	return 0;
}
