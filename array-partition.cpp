#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pairs(int arr[], int n){
	int i;
	sort(arr,arr+n);
	int s=0;
	for(i=0;i<n;i=i+2){
		s=s+arr[i];
	}
	return s;
}
int main(){
	int n,i,arr[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int c=	pairs(arr,n);
	cout<<c;
	return 0;
	
}
