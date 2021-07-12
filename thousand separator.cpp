#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string thousandSeparator(int n) 
{
    if(n<1000)
    {
		return to_string(n);
	}
    string ans="";    
    string temp=to_string(n);
    int len=temp.length();
    int c=0;
    for(int i=len-1; i>=0; i--)
    {
        c++;
        ans+=temp[i];
        if(c==3)
        {
            ans+=".";
            c=0;
        }
    }
    reverse(ans.begin(),ans.end());
    if(ans[0]=='.')
    {
		ans=ans.substr(1);
    }
	return ans;
}

int main()
{
	int n;
	cout << "Enter integer: ";
	cin >> n;
	string s=thousandSeparator(n);
	cout << "The dot separated string is: " << s;
	return 0;
}
