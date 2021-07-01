#include<iostream>
using namespace std;
void shuffle(int arr1[100], string arr2[100], int n){
	int i;
	string a[n];
	for(i=0;i<n;i++){
		a[i]=arr2[arr1[i]];
	}
	for(i=0;i<n;i++){
	 cout<<a[i]<<" ";	
	}
}
int main(){
	int n,i,arr[100];
	string arr2[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cin>>arr2[i];
	}
	shuffle(arr, arr2,n);
	return 0;
}
