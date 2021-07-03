#include<iostream>
using namespace std;
void landhole(int arr[][10], int n){
	int peri =0,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]==0){
				continue;
			}
			peri+=4;
			if(arr[i-1][j]==1){
				peri--;
			}
			if(arr[i+1][j]==1){
				peri--;
			}
			if(arr[i][j-1]==1){
				peri--;
			}
			if(arr[i][j+1]==1){
				peri--;
			}
		}
	}
	cout<<peri;
}
int main(){
	int i,j,n, arr[10][10];
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	landhole(arr,n);
}
