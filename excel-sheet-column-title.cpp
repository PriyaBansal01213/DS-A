#include<iostream>
using namespace std;
string colno(int n){
	string ans = "";
	while(n>0){
		char c = 'A'+(n-1)%26;
		ans = c+ans;
		n = (n-1)/26;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<colno(n);
}
