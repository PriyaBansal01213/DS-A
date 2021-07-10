#include<iostream>
using namespace std;
int longest_palindrome(string s){
	int n = s.length();
	int arr1[26],arr2[26];
	for(int i=0;i<26;i++){
		arr1[i]=arr2[i]=0;
	}
	for(int i=0;i<n;i++){
		if(islower(s[i])) {arr1[s[i]-97]++;}
		else{ arr2[s[i]-65]++;}
	}
	int ans=0;
	bool isfirst = false;
	for( int i=0;i<26;i++){
		if(arr1[i]%2==0){
			ans +=arr1[i];
		}
		else{
			if(isfirst==false){
				ans += arr1[i];
				isfirst = true;
			}
			else{
				ans += arr1[i]-1;
			}
		}
	}
	for( int i=0;i<26;i++){
		if(arr2[i]%2==0){
			ans +=arr2[i];
		}
		else{
			if(isfirst==false){
				ans += arr2[i];
				isfirst = true;
			}
			else{
				ans += arr2[i]-1;
			}
		}
	}
	return ans;

}
int main(){
	string s;
	getline(cin,s);
	cout<<longest_palindrome(s);
}
