#include<iostream>
using namespace std;
void rotate( int arr[][10], int n, int m, int k){
	int i,j=0,t,c,p;
	int temp[m];
	k=k%(m*n);
	while(k>0){
		p = arr[n-1][m-1];
		t=arr[0][0];
	for(i=0;i<n;i++){
		while(j<m){
			if(j<m-1){
			c=arr[i][j+1];
			arr[i][j+1] =t;
			t=c;
			
		}
		if(j== m-1){
			c=arr[i+1][0];
			arr[i+1][0] = t;
			t=c;
		}
		j++;
		
	}
	j=0;
}
arr[0][0]  =p;
k--;
}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int n,m,i,j,arr[10][10],k;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cin>>k;
	rotate(arr,n,m,k);
	return 0;
}
