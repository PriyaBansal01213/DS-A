#include<iostream>
using namespace std;
int main(){
	int n, arr[100];
	cin>>n;
	arr[0]=0;
	for(int i =1;i<=n;i++){
		int c=i, m=0;
		while(c!=0){
			m++;
			c= c&(c-1);
		}
		arr[i]=m;
	}
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
}
