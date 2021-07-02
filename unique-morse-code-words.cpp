#include<iostream>
#include<vector>
#include<set>
using namespace std;
int morsecode( vector<string>& v, string arr[] , int n){
	set<string> s;
	for( int j =0;j<n;j++){
		string w = v[j];
		string t ="";
		for(int i=0;i<w.size();i++){
			t += arr[w[i]-97];
		}
		s.insert(t);
	}
	return s.size();

return 0;
}
int main(){
	vector<string> v ;
	string arr[26]= {  ".-","-...", ".--...","-..",".",".-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-","..-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	int i,n;
		string t;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
	int c = morsecode(v,arr,n);
	cout<<c;
	return 0;
	}
