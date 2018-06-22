#include<iostream>
using namespace std;

int main(){
	int n;
	int a[102][102];
	while(cin>>n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if (i==n/2 && j==n/2) a[i][j]=4;
				else if(j>=n/3 && j<n-n/3 && i>=n/3 && i<n-n/3){
					a[i][j]=1;
				}
				else if (i==j) a[i][j]=2;
				else if (i==n-j-1) a[i][j]=3;
				else a[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
				
