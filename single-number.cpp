#include<iostream>
using namespace std;
int calculate(int arr[], int n){
	int x = arr[0];
	for(int i=1;i<n;i++){
		x^= arr[i];
	}
	return x;
}
int main(){
	int n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<calculate(arr,n);
}
