#include<iostream>
#include<algorithm>
using namespace std;
void area(int arr[][10], int n){
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(arr[i][j]>0){
			ans += arr[i][j]*4 +2;
		}
	if(i>0){
		
		ans -=  2*(  min(arr[i-1][j],arr[i][j]));
	}
	if(j>0){
	
		ans -= 2*( min(arr[i][j-1],arr[i][j]));
	}
	
	}
}
cout<<ans;	
}
int main(){
	int n,i,arr[10][10];
	cin>>n;
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
		
		cin>>arr[i][j];
	}
}
	area(arr,n);
}
