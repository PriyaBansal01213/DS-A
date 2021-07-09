#include<iostream>
using namespace std;
int roman(char s){
	switch(s){
		case 'I':return 1;
		case 'V':return 5;
		case 'X':return 10;
		case 'L':return 50;
		case 'C':return 100;
		case 'D':return 500;
		case 'M':return 1000;
	}
}
int cal(string s, int n){
	int a=0;
	for(int i =0;i<n;i++){
		if(roman(s[i])<roman(s[i+1])){
			a += roman(s[i+1])-roman(s[i]);
			i++;
		}
		else{
			a +=roman(s[i]);
		}
	}
	return a;
}
int main(){
	string s;
	cin>>s;
	int n = s.length();
	int c = cal(s,n);
	cout<<c;
	return 0;
}
