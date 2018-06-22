#include<iostream>
using namespace std;

int main(){
	int n;
	int a[100][100];
	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][j]=j+1;
			}
		}
		for(int j=1;j<n;j++){
			for(int k=0;k<j;k++){
				a[j][k]=a[j-1][k]+1;
			}
			for(int k=j;k<n;k++){
				a[j][k]=a[j-1][k]-1;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i][0]<10) cout<<"  ";
			else if(a[i][0]<100) cout<<" ";
			cout<<a[i][0];
			for(int j=1;j<n;j++){
				if(a[i][j]<10) cout<<"   ";
				else if(a[i][j]<100) cout<<"  ";
				else cout<<" ";
				cout<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
