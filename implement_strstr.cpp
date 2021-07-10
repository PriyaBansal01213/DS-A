#include<iostream>
#include<string>
using namespace std;
int strstr(string s, string n){
	if(n == ""){
		return 0;
	}
	int found = s.find(n);
	if(found != string::npos){
		return found;
	}
	return -1;
}
int main(){
	string s,n;
	getline(cin,s);
	getline(cin,n);
	int c =strstr(s,n);
	cout<<c;
}
