#include<iostream>
#include<string>
using namespace std;
bool strstr(string magazine, string ransomnote){
	if(ransomnote == ""){
		return true;
	}
	int found = magazine.find(ransomnote);
	if(found != string::npos){
		return true;
	}
	return false;
}
int main(){
	string magazine,ransomnote;
	getline(cin,magazine);
	getline(cin,ransomnote);
	bool c =strstr(magazine,ransomnote);
	cout<<boolalpha<<c;
}

