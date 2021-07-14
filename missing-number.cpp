#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n,x=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
/*
USING XOR
	for(int i=0;i<n;i++){
		x^=arr[i];
	}
	cout<<x;
	*/
	/*
	USING NATURAL NUMBER SUM
	int s2=0, s1 = (n*(n+1))/2;
	for(int i=0;i<n;i++){
		s2=s2+arr[i];
	}
	cout<<(s1-s2);
	*/
}

