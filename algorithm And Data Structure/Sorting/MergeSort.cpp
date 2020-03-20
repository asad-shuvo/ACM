#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++){
		left[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		right[i]=arr[mid+1+i];
	}
	int i=0,j=0;
	int k=l;
	while(i<n1 and j<n2){
		if(left[i]<=right[j]){
			arr[k++]=left[i++];
		}
		else
		arr[k++]=right[j++];
	}
	while(i<n1){
			arr[k++]=left[i++];
	}
	while(j<n2){
		arr[k++]=right[j++];
	}
}
void Mergesort(int arr[],int l,int r){
	if(l<r){
		int mid=l+(r-l)/2;
		Mergesort(arr,l,mid);
		Mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
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
	for(int i=0;i<n;i++)cin>>arr[i];
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	cout<<sz<<endl;
	Mergesort(arr,0,n-1);
	print(arr,n);
}
