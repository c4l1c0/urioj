#include<iostream>
using namespace std;

int main(){
	int n;
	int a[100][100];
	while(cin>>n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][j]=3;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j) a[i][j]=1;
				if(i==n-j-1) a[i][j]=2;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
}
