#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	int a[15][15];
	int d,dd;
	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][j]=pow(2,j+i);
			}
		}
		d=floor(log10(abs(pow(2,2*n-2)))) + 1;
		for(int i=0;i<n;i++){
			dd=floor(log10(abs(a[i][0]))) + 1;
			for(int z=0;z<d-dd;z++) cout<<" ";
			cout<<a[i][0];
			for(int j=1;j<n;j++){
				dd=floor(log10(abs(a[i][j]))) + 1;
				for(int z=0;z<d-dd+1;z++) cout<<" ";
				cout<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
