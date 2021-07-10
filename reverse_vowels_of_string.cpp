#include<iostream>
using namespace std;
bool isvowel(char ch){
	return(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
string reverse_vowel(string s){
	int n = s.length();
	int l =0, r=n-1;
	while(l<r){
		if(isvowel(s[l]) && isvowel(s[r])){
			swap(s[l],s[r]);
			l++;r--;
		}
		else if( !isvowel(s[l])){
			l++;
		}
		else if( !isvowel(s[r])){
			r--;
		}		
	}
	return s;
}
int main(){
	string s;
	getline(cin,s);
	cout<<reverse_vowel(s);
}
