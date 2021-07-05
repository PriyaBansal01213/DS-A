#include<iostream>
using namespace std;
void transpose( int arr[][10], int n, int m){
	int i,j,a[m][n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[j][i] = arr[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}	
}
int main(){
	int n,m,arr[10][10],i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
		
	}
	transpose(arr,n,m);
	return 0;
}
