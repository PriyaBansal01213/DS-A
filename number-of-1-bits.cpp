#include<iostream>
#include<stdint.h>
using namespace std;
int cal(uint32_t n){
	int c=0;
	while(n!=0){
		n&= (n-1);
		c++;
	}
	return c;
	
}
int main(){
	uint32_t n;
	cin>>n;
	cout<<cal(n);
}
