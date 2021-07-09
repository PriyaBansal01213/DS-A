#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string binary(string a, string b){
	int c = 0;
	string s="";
	int la  = a.length()-1;
	int lb = b.length()-1;
	while(la>=0 || lb>=0){
		int sum = c;
		if(la>=0){
			sum += a[la]-'0';
			la--;
		}
		if(lb>=0){
			sum += b[lb] -'0';
			lb--;
		}
		c = sum>1 ? 1:0;
		s += ((sum%2)?"1":"0");
	}
	if(c){
		s += ((c)?"1":"0");
	}
	reverse(s.begin(), s.end());
	return s;
	
}
int main(){
	string a, b;
	cin>>a>>b;
	string ans = binary(a,b);
	cout<<ans;
	return 0;
}
