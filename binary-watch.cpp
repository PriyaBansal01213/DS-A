#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<string> time;
	string p,m;
	for(int i=0;i<12;i++){
		bitset<4> hour(i);
		for(int j=0;j<60;j++){
			bitset<6> mini(j);
			if(hour.count() + mini.count() == n){
				p = tostring(i);
				m = (j<10)?":0":":";
				m = m+to_string(j);
				time.push_back(p+m);
			}
		}
		
	}
	for(int i =0;i<time.size();i++){
		cout<<time[i]<<" ";
	}
}
