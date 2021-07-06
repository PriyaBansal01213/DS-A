#include<iostream>
using namespace std;
void negative_no(int arr[][100], int n, int m){
	int i,j,c=0;
	for(i=m-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(arr[i][j]<0){
				c++;
			}
			if(arr[i][j]>0){
				break;
			}
		}
	}
	cout<<c;
}
int main(){
	int n,m,i,j,arr[100][100];
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	negative_no(arr,n,m);
}
