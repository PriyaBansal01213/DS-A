#include<iostream>
using namespace std;
void weak_hospital(int arr[][100], int n, int m, int k){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(arr[j][i]==0){
				if( i>0 && arr[j][i-1]==1  && k>0 ){
					cout<<j<<" ";
					k--;
				}
				else if(i==0){
					cout<<j<<" ";
					k--;
				}
			}
		}
	}
}
int main(){
	int n,m,i,j,arr[100][100],k;
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cin>>k;
	weak_hospital(arr,n,m,k);
}
