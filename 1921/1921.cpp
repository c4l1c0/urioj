#include<iostream>
using namespace std;

int main(){
	int n;
	long long s;
	cin>>n;
	if(n==3) cout<<0<<endl;
	else if(n==4) cout<<2<<endl;
	else {
		s=2;
		for(int i=4; i<n; i++){
			s+=i-1;
		}

		cout<<s<<endl;
	}
	return 0;
}
