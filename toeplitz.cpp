#include<iostream>
using namespace std;
bool toeplitz(int arr[][10], int n, int m){
	int i,j;
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			if(arr[i][j] != arr[i-1][j-1]){
				return false;
			}
		}
	
	}
		return true;
} 
int main(){
	int n,m,arr[10][10],i,j;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
   bool c = toeplitz(arr,n,m);
   cout<<std::boolalpha;
   cout<<c;
	
	return 0;
}
