#include <bits/stdc++.h>
using namespace std;

void merge(int *a,int start,int mid, int end){
	int temp[end-start+1];
	int i=start,j=mid+1,k=0;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			temp[k++]=a[i];
			i++;		
		}else
		{
			temp[k++]=a[j];
			j++;
		}
	}
	if(i<=mid)
	for(int m=i;m<=mid;m++)
	{
		temp[k++]=a[m];
	}
	if(j<=end)
	for(int m=j;m<=end;m++)
	{
		temp[k++]=a[m];
	}
	for(int i=start;i<=end;i++)
	a[i]=temp[i-start];
	
}

void mergesort(int *a,int start,int end){
		int mid;
		if(start<end){
			mid=(end+start)/2;
			mergesort(a,start,mid);
			mergesort(a,mid+1,end);
			
		merge(a,start,mid,end);
	}
	}

int main(){
	cout<<"Enter size"<<endl;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	for(int i: a)
	cout<<i<<" ";
	return 0;
	}
