#include<iostream>
using namespace std;
void check(int arr[][10], int n, int m, int sr, int sc, int newcolor, int c){
	if(sr>n || sr<0 || sc<0 || sc>m){
		return;
	}
	else if(arr[sr][sc]!=c){
		return;
	}
	arr[sr][sc] = newcolor;
	
	   check(arr,n,m,sr,sc+1,newcolor,c);
		check(arr,n,m,sr+1,sc,newcolor,c);
		check(arr,n,m,sr,sr-1,newcolor,c);
	check(arr,n,m,sr-1,sc,newcolor,c);
}
void flood_fill(int arr[][10], int n, int m, int sr, int sc, int newcolor)
{
	int i,j;
	int c = arr[sr][sc];
	check(arr,n,m,sr,sc,newcolor,c);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
int main(){
	int n,m,arr[10][10],i,j;
	int sr, sc, newcolor;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>arr[i][j];
		}
		
	}
	cin>>sr>>sc>>newcolor;
	flood_fill(arr,n,m,sr,sc,newcolor);
	return 0;
}
