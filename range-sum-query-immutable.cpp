#include<iostream>
using namespace std;
void rangesum(int arr[], int n, int i, int j){
	int a[n+1];
	a[0] = 0;
	for(i=1;i<=n;i++){
		a[i] =a[i-1] + arr[i-1];
	}
	int c =a[j+1]-a[i];
	cout<<c;	
}
int main(){
	int i,j,t,n,arr[10];
	cin>>n;
	for(t=0;t<n;t++){
		cin>>arr[t];
	}
	cin>>i>>j;
	rangesum(arr,n,i,j);
}
