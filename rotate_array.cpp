#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > rotate(vector<vector<int> > mat1){
	for(int i =0 ;i<mat1.size();i++){
		for(int j=0;j<mat1.size();j++){
			swap(mat1[i][j],mat1[j][i]);
		}
	}
	for(int i=0;i<mat1.size();i++){
		reverse(mat1[i].begin(),mat1[i].end());
	}
	return mat1;
}
bool solve(vector<vector<int> > mat1, vector<vector<int> > mat2, int n )
{
	int k =4,i,j;
	while(k--){
		mat1 = rotate(mat1);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(mat1[i][j] == mat2[i][j]){
			return true;
		}
		}
		
	}
}
	return false;
}
int main(){
	int n,i,j;
	int c,m;
	cin>>n;
	vector<vector<int> > mat1(n), mat2(n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>c;
			mat1[i].push_back(c);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>m;
			mat2[i].push_back(c);
		}
	}
	bool p=solve(mat1, mat2, n);
	cout<<boolalpha;
	cout<<p;
}
