#include<iostream>
using namespace std;

int main(){
	int n, t, m, p;
	cin>>n;
	m=99;
	p=0;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t<m){m=t; p=i;}
	}
	cout<<p+1<<endl;
	return 0;
}


