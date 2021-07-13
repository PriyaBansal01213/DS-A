#include<iostream>
using namespace std;
int conversion(int num, int base){
	int ans=0;
	int m=1;
	while(num>0){
		ans = ans+num%10*m;
		m = m*base;
		num/=10;
		
	}
	return ans;
}
int main(){
	int num,base;
	cin>>num;
	cin>>base;
	cout<<conversion(num,base);
}
