#include<iostream>
using namespace std;
void highest(int arr[100], int n, int e){
	bool a[n];
	int max=arr[0], i;
	for( i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if((arr[i]+e)>=max){
			a[i]= true;
		}
		else {
			a[i]= false;
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i];
	}	
}
int main(){
	int i,n,arr[100],extra;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>extra;
	highest(arr,n,extra);
	return 0; 
}
