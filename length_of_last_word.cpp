#include<iostream>
using namespace std;
int lengthLastWord(string s,int n)
{
	if(n==0)
	{
		return 0;
	}
	int res=0;
	for(int i=n-1;i>=0;i--)
	{
		char c=s[i];
		if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		{
			res++;
		}
		else{
			break;
		}
	}
	return res;
}

int main()
{
	string s;
	getline(cin,s);
	int n=s.length();
	int len=lengthLastWord(s,n);
	cout << len;
	return 0;
}
