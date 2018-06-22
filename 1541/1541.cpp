#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0) break;
		cout<<trunc(sqrt(a*b*(100.0/c)))<<endl;
	}
	return 0;
}

	
