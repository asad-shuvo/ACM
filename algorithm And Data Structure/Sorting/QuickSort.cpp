#include<bits/stdc++.h>
using namespace std;
int part(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return (i+1);
}
void QuickSort(int arr[],int l,int r){
	if(l<r){
		int pi=part(arr,l,r);
		QuickSort(arr,l,pi-1);
		QuickSort(arr,pi+1,r);
	}
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	 cin>>n;
	int arr[n+5];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	QuickSort(arr,0,n-1);
	print(arr,n);
}
