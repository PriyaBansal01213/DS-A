#include<iostream>
using namespace std;
int duplicate(int arr[100], int n){
	int i=0,j=1;
	if(n==0 || n==1){
		return n;
	}
for(j=1;j<n;j++){
	if(arr[j]!=arr[i]){
		i++;
		arr[i]=arr[j];
	}
	}
	return i+1;
		
	}

int main(){
	int n;
	int arr[100];
	cin>>n;
	for(int i =0 ;i<n;i++){
		cin>>arr[i];
	}
 int k = duplicate(arr,n);
for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}	
return 0;	
}
