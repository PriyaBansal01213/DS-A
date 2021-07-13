#include<iostream>
using namespace std;
bool cal(int n){
	if(n==0) return false;
	int temp =n ;
	return((n&(-temp))==n);
}
int main(){
	int n;
	cin>>n;
	cout<<boolalpha<<cal(n);
}
