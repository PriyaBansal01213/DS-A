#include<iostream>
#include<vector>
using namespace std;
void pairs(int arr[], int n){
	int i,j,k,z;
	for(i=0;i<n-1;i=i+2){
			k=arr[i];
			z= arr[i+1];
			for(j=0;j<k;j++){
				cout<<z<<" ";
				
			}
	}
}
int main(){
	int n,i,arr[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	pairs(arr,n);
	return 0;
}
