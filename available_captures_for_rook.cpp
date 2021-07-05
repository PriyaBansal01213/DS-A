#include<iostream>
using namespace std;
void rook(char arr[][100], int n){
	int i,j,row,col,c=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]=='R'){
				col =j;
				row = i;
				break;
			}
		}
	}
		for(i=row-1;i>=0;i--){
			if(arr[i][col] == 'B'){
				break;
			}
			else if(arr[i][col] == 'p'){
				c++;
				break;
			}
		}
		for(i=row+1;i<n;i++){
			if(arr[i][col] == 'B'){
				break;
			}
			else if(arr[i][col] == 'p'){
				c++;
				break;
			}
		}
		for(i=col-1;i>=0;i--){
			if(arr[row][i] == 'B'){
				break;
			}
			else if(arr[row][i] == 'p'){
				c++;
				break;
			}
		}
		for(i=col+1;i<n;i++){
			if(arr[row][i] == 'B'){
				break;
			}
			else if(arr[row][i] == 'p'){
				c++;
				break;
			}
		}
		
	cout<<c;
}
int main(){
	int n,i,j;
	char arr[100][100];
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	rook(arr,n);
	return 0;
}
