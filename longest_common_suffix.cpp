#include<iostream>
#include<algorithm>
using namespace std;
string Lcp (string lcpl, string lcpr){
	int m = min(lcpl.length(), lcpr.length());
	for(int i=0;i<m;i++){
	if(lcpl[i]!=lcpr[i]){
		return lcpl.substr(0,i);
	}
	}return lcpl.substr(0,m);
}
string sol( string s[], int l, int r){
	if(l==r){return s[l];}
	else{
		int m = (l+r)/2;
		string lcpl = sol(s,l,m);
		string lcpr = sol(s,m+1,r);
		return Lcp(lcpl,lcpr);
	}
}
int main(){
	string s[100];
	int i,n;cin>>n;
	for(i=0;i<n;i++){
		cin>>s[i];
	}	for(i=0;i<n;i++){
		string p = s[i];
		 reverse(p.begin(),p.end());
		 s[i] = p;
	}   string c = sol(s,0,n-1);
	reverse(c.begin(),c.end());
	cout<<c;
	return 0;
}
