#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int inplace(int arr[], int n){
	int i , a[100],c=0;
	for(int i=0;i<n;i++){
		a[i]=arr[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(arr[i]!=a[i]){
			c++;
		}
	}
	return c;	
}
int main(){
	int n ,i, arr[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int c= inplace(arr,n);
	cout<<c;
	return 0;
}
