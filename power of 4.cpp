#include<iostream>
#include<bits/stdc++.h>
#include<stdint.h>
using namespace std;

bool hammingWeight(int n)
{
	int c=0;
	while(n!=0)
	{
		c++;
		n=n&(n-1);
	}
		if(c%2==0)
	{
	return true;
	}
	return false;
}

int main()
{
	uint32_t n;
	cin >> n;
	bool count=hammingWeight(n-1);
	cout<<boolalpha<<count;
	return 0;
}
