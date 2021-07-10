#include<iostream>
using namespace std;
string anagram(string s1, string s2){
	int n = s1.length(),i;
	int m = s2.length();
	if(m!=n){
		return "No";
	}
	int arr[26];
	for(i=0;i<26;i++){
		arr[i]=0;
	}
	for(i=0;i<n;i++){
		arr[s1[i]-'a']++;
	
	}
	for(i=0;i<m;i++){
		arr[s2[i]-'a']--;
	}
	for(i=0;i<26;i++){
	if(	arr[i] != 0){
		return "No";
	}
	}
	return "Yes";
	
}
int main(){
	string s1, s2;
	cin>>s1>>s2;
	cout<<anagram(s1,s2);
}
