#include<iostream>
using namespace std;
void target(int arr[], int index[], int n){
	int i,j;
	int t[n];
	for(i=0;i<n;i++){
		if(index[i]>=i){
			t[index[i]]= arr[i];
		}
		else
		{
			for(int j=n-1;j>index[i];j--){
				t[j] = t[j-1];
			}
			t[index[i]]=arr[i];
	}
}
for(i=0;i<n;i++){
	cout<<t[i]<<" ";
}
}
int main(){
	int arr[100], n,index[100];
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>index[i];
	}
	target(arr,index,n);return 0;
}
