#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void truncate(string s, int k){
	int c=0;
	string str,t;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			str+=t;
			t="";
			c++;
		}
		if(c==k){
			break;
		}	
		else{
			t +=s[i];
		}
}
	str+=t;
cout<<str;
}
int main(){
	string s;
	getline(cin,s);
	int k;
	cin>>k;
	truncate(s,k);
	return 0;
}
