#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peak(int arr[], int n){
	if(n==1){
		return 0;
	}
	if(arr[0]>=arr[1]){
		return 0;
	}
	if(arr[n-1]>= arr[n-2]){
		return n-1;
	}
	for(int i=1;i<n-1;i++){
		if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
			return i;
		}
	}
}
int main(){
	int n,i,arr[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int in = peak(arr,n);
	cout<<in;
	return 0;
}
