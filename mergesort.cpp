#include <bits/stdc++.h>
using namespace std;

void merge(int *a,int start,int mid,int end){
	int temp[end-start+1];
	int i=start,j=mid+1,k=0;
	
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=end)
	temp[k++]=a[j++];
	
	for(int i=0;i<k;i++)
	a[i]=temp[i];
}

void mergesort(int *a,int start,int end){
	int mid=start+(end-start)/2;
	if(start<end)
	{
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		
		merge(a,start,mid,end);
	}	
}
	
int main(){
	cout<<"size \n";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	for(int i:a)
	cout<<i<<" ";	
	return 0;
}
