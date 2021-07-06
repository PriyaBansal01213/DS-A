#include<iostream>
using namespace std;
void special(int arr[][100], int n, int m){
	int i,j,k;
	for(i=0;i<m;i++){
		int max  = INT_MIN;
	int min = INT_MAX;
		for(j=0;j<n;j++){
			if(arr[i][j]<min){
				min = arr[i][j];
				k=j;
			}
		}
		for(j=0;j<m;j++){
			if(arr[j][k]>max){
				max = arr[j][k];
			}
		}
		if(min==max){
			cout<<min;
			break;
		}
		
	}
}
int main(){
	int n,m,i,j,arr[100][100];
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	special(arr,n,m);
}
