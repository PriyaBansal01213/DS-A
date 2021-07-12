#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
vector<int> search(string s, char c){
	vector <int> freq;
	vector<int> r(s.length()); 
	for(int i=0;i<s.length();i++){
		if(s[i] == c){
			freq.push_back(i);
		}
	}
	int min;
	vector<int> dis(freq.size());
	for(int i=0;i<s.length();i++){
		if(s[i]==c){
			r[i]=0;
		}
		else{
			for(int j=0;j<freq.size();j++){
				dis[j] = abs(freq[j]-i);
			}
			min = dis[0];
			for(int k =1;k<dis.size();k++)
				{
					if(dis[k]<min)
					{
						min = dis[k];
					}
				}
			r[i]=min;	
		}
	
	}
	return r;
}
int main(){
	string s;
	getline(cin,s);
	char c;
	cin>>c;
	vector<int> v = search(s,c);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
