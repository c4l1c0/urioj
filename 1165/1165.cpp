#include<iostream>
#include<cmath>
using namespace std;

int main(){
	unsigned long long n;
	int t;
	bool p;
	n=0;

	cin>>t;
	while(t--){
		cin>>n;
		p=1;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) {
				p=0;
				break;
			}
		}
		if(n==0 || n==1 || n==4) p=0;
		if(p) cout<<n<<" eh primo"<<endl;
		else cout<<n<<" nao eh primo"<<endl;
	}
	return 0;
}

