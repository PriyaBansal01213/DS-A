#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
string add(string a, string b){
	int i = a.length()-1;
	int j= b.length()-1,c=0;
	string ans ="";
	while(i>=0 || j>=0){
		int sum = c;
		if(i>=0){
			sum += a[i]-'0';
			i--;
		}
		if(j>=0){
			sum += b[j]-'0';
			j--;
		}
		c = sum>9?1:0;
		if(c==0){
			ans += to_string(sum);
		}
		else{
			ans += to_string(sum%10);
		}
	}
	if(c){
		 ans += c + '0';
	}
	reverse(ans.begin(), ans.end());
	return ans;
	
}
int main(){
	string a,b;
	cin>>a>>b;
	string ans = add(a,b);
	cout<<ans;
	return 0;
}
