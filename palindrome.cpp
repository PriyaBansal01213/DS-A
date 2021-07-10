#include<iostream>
#include<string>
using namespace std;
string palindrome(string s){
	int n = s.length();
	for(int i=0;i<n;i++){
		s[i] = tolower(s[i]);
	}
	int l =0;
	int r =n-1;
	while(l<=r){
		if(s[l] == s[r]){
			l++;
			r--;
		}
		else{ return "NO";}
		if(!isalpha(s[l])){ l++;}
		if(!isalpha(s[r])){ r--;}
			
	}
	return "Yes";
}
int main(){
	string s;
	getline(cin,s);
	cout<<palindrome(s);
	return 0;
}
