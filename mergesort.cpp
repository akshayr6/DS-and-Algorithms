#include <bits/stdc++.h>
using namespace std;

int partition(int *a,int start,int end){
	int p=end,i=start-1;
	for(int j=start;j<end;j++) //loop to arrange all the less elements to the left and greater to the right of pivot
	{
		if(a[j]<a[p])
		{
			i++; 
			swap(a[i],a[j]);
		}
	}
	i++; //move the index to the place for the pivot to be swapped
	swap(a[i],a[p]);//swap the pivot to the right location
	return p;	
}

void quicksort(int *a,int start,int end){
	if(start<end)
	{
	int p=partition(a,start,end);
	
	quicksort(a,start,p-1);
	quicksort(a,p+1,end);
	}
}

int main(){
	cout<<"size \n";
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
