#include<iostream>
#include<set>
using namespace std;
void intersection(int a[100], int b[100], int n , int m){
	int i=0,j=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
			}
		}
	}
}
void unions(int a[100], int b[100], int n , int m){
	int i=0,j=0;
	set <int> s;
	while(i<n){
		s.insert(a[i]);
		i++;
	}
	while(j<m){
		s.insert(b[j]);
		j++;
	}
	cout<<"\n";
	set<int>::iterator it;
	for(it=s.begin(); it!=s.end();it++){
		cout<<*it<<" ";
	}
}
int main(){
	int i,n,m,arr1[100],arr2[100];
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(i=0;i<m;i++){
		cin>>arr2[i];
	}
	intersection(arr1,arr2,n,m);
	unions(arr1, arr2, n,m);
	return 0;
}
