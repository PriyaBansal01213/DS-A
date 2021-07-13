#include<bits/stdc++.h>
#include<string>
using namespace std;
void cal(string num, int base){
	string ans = "";
	int m = stoi(num.substr(0,num.find('.')));
	while(m!=0){
		ans+= to_string(m%base);
		m/=base;
	}
	if(num.find('.')!=-1){
		float n = stof(num.substr(num.find('.')));
		string s = "";
		for(int i =0;i<8;i++){
			n*=base;
			if(n>1){
				s += to_string(int(n));
				n-=int(n);
			}
			else{
				s +="0";
			}
		}
		cout<<ans<<"."<<s;
}
}
int main(){
	string num;
	cin>>num;
	int base;
	cin>>base;
	cal(num,base);
}
