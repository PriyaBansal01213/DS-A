#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool cal(string s, int n){
	stack <char> st;
	int i,flag=1,temp=0;
	for(i=0;i<n;i++)
	{
	if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
		st.push(s[i]);
		}
	else{
		if(st.empty()) return false;
			char temp = st.top();
			st.pop();
			if(s[i]==')' && temp!='(') return false;
			if(s[i]=='}' && temp!='{') return false;
			if(s[i]==']' && temp!='[') return false;
		 
	   		

		}
	}
if(!st.empty()) {return false;}
return true;
}
using namespace std;
int main(){
	string s;
	cin>>s;
	int n= s.length();
	bool c =cal(s,n);
	cout<<boolalpha<<c;
}
