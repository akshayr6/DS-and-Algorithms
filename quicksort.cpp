#include <bits/stdc++.h>
using namespace std;

int partition(int *a,int start,int end){
	int p=end;
	int index=start-1;
	for(int j=start;j<end;j++)
	{
			if(a[j]<a[p])
			{
					index++;
					swap(a[index],a[j]);
			}
	}
	swap(a[index+1],a[p]);
	p=index+1;
	return p;
	}

void quicksort(int *a,int start,int end){
	int p;
	if(start<end)
	{
	p=partition(a,start,end);
	
	quicksort(a,start,p-1);
	quicksort(a,p+1,end);
	}
}

int main(){
	cout<<"Enter size"<<endl;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(int i:a)
	cout<<i<<" ";
	return 0;
	}
