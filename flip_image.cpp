#include<iostream>
using namespace std;
void flip_image(int arr[][10], int n){
	int i,j,t;
	for(i=0;i<n;i++){
	
		for(j=n-1;j>=n/2;j--)
		{
			t = arr[i][n-1-j];
			arr[i][n-1-j] = arr[i][j];
			arr[i][j] = t;
		
		
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr[i][j] = 1- arr[i][j];
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
}
int main(){
	int n,arr[10][10],i,j;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	flip_image(arr,n);
	return 0;
}
