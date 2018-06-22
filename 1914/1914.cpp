#include<iostream>
using namespace std;

int main(){
	string n1,n2,c1,c2;
	int m1,m2,t;
	cin>>t;
	while(t--){
		cin>>n1>>c1>>n2>>c2;
		cin>>m1>>m2;
		if((m1+m2)%2){
			if(c1=="PAR") cout<<n2<<endl;
			else cout<<n1<<endl;
		}
		else{
			if(c1=="PAR") cout<<n1<<endl;
			else cout<<n2<<endl;
		}
	}
	return 0;
}

