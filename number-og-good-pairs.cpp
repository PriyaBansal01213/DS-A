#include<iostream>
using namespace std;
int good_pair(int arr[100], int n){
	int i,j,c=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				c++;
			}	
		}
	}
	return c;
}
int main(){
	int n,arr[100],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int k = good_pair(arr,n);
	cout<<k;
	return 0;
}
