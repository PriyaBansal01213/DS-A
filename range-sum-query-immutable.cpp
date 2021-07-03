#include<iostream>
using namespace std;
void rangesum(int arr[], int n, int num[][10], int m){
	int a[n+1],k,p,i;
	a[0] = 0;
	for(i=1;i<=n;i++){
		a[i] =a[i-1] + arr[i-1];
	}
	for(i=0;i<m;i++){
		k = num[i][0];
		p = num[i][1];
		int c =a[p+1]-a[k];
		cout<<c<<" ";
	}

		
}
int main(){
	int i,j,t,n,arr[10],m,num[10][10];
	cin>>n;
	for(t=0;t<n;t++){
		cin>>arr[t];
	}
	cin>>m;
	for(i=0;i<m;i++){
		for(j=0;j<2;j++){
			cin>>num[i][j];
		}
	}
	rangesum(arr,n,num,m);
}
