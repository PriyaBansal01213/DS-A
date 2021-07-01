#include<iostream>
using namespace std;
void small(int arr[100], int n){
	int i,j,c=0;
	for(i=0;i<n;i++){
	 	c=0;
	 	for(j=0;j<n;j++){
	 		if(arr[i]>arr[j] && i!=j){
	 			c++;
			 }
		 }
		 cout<<c<<" "
	}
}
int main(){
	int n,i,arr[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	small(arr,n);
	return 0;
}
