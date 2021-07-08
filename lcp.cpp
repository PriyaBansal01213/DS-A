#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string longest_prefix(string s[], int n){
	int mini;
	string lcp="";
	sort(s,s+n);
	mini = min(s[0].size(), s[n-1].size());
	for(int i=0;i<mini;i++){
		if(s[0][i] == s[n-1][i]){
			lcp += s[0][i];
		}
	}
	return lcp;
}
int main(){
	string s[100];
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	string c = longest_prefix(s,n);
	cout<<c;
	return 0;
	
}
