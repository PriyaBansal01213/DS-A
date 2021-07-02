#include<iostream>
using namespace std;
int rich(int arr[100][100], int r, int c){
int max=0, sum=0,cust=0,i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum  = sum + arr[i][j];
		}
		if(max<sum){
			max = sum;
			cust=i+1;
		}
	}
	return cust;
}	

int main(){
	int r,c,i,j,arr[100][100];
	cin>>r>>c;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	int k = rich(arr,r,c);
	cout<<k;
	return 0;
}
	
