#include<iostream>
#include<vector>
using namespace std;
vector<string> search(string s[], int n){
	int arr[26];
	vector <string>r;
	arr[0]=2;arr[1]=3;arr[2]=3;arr[3]=2;arr[4]=1;arr[5]=2;arr[6]=2;arr[7]=2;arr[8]=1;
	arr[9]=2;arr[10]=2;arr[11]=2;arr[12]=3;arr[13]=3;arr[14]=1;arr[15]=1;arr[16]=1;arr[17]=1;
	arr[18]=2;arr[19]=1;arr[20]=1;arr[21]=3;arr[22]=1;arr[23]=3;arr[24]=1;arr[25]=3;
	for(int i=0;i<n;i++){
		int temp = arr[tolower(s[i][0])-97];
		int f =0;
		for(int j=1;j<s[i].length();j++){
			if(temp!=arr[tolower(s[i][j])-97]){
				f=1;
				break;
			}
		}
		if(f==0){
			r.push_back(s[i]);
		}
	}
	return r;
}
int main(){
	string s[100];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	vector<string> r = search(s,n);
	for(i =0;i<r.size();i++){
		cout<<r[i]<<" ";
	}
}
