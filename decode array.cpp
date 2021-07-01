#include<iostream>
#include<vector>
using namespace std;
void decoded(int arr[100], int n){
	int i,c=0,x=0;
	int a[n];
	// calculating first element
	for(i=0;i<n;i++){
	c^=i;	
	}
	for(i=1;i<n;i=i+2){
		x^=arr[i];
	}
	a[0] = x^c;
	
	for(i=1;i<=n;i++){
		a[i] = a[i-1]^arr[i-1];
	}
	for(i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int i,n,arr[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	decoded(arr,n);
	return 0;
}
