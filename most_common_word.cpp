#include<bits/stdc++.h>
using namespace std;
string common(string s1, vector<string> s2){
	int i,freq=INT_MIN;
	string temp;
	string word;
	unordered_set <string> set(s2.begin(),s2.end());
	for(i=0;i<s1.length();i++)
	{
		s1[i] = isalpha(s1[i])? tolower(s1[i]):' ';
	}
	stringstream s(s1);
	unordered_map<string,int> result;
	while(s>>word){
		if(set.find(word) == set.end()){
			result[word]++;
			if(freq<result[word]){
				temp = word;
				freq = result[word];
			}
		}
	}return temp;}
int main(){
	int n,i;
	string s1,t;
	getline(cin,s1);
	cin>>n;
	vector<string> s2;
	for(i=0;i<n;i++){
		cin>>t;
		s.push_back(t);
	}
	string ans = common(s1,s2);
	cout<<ans;}

