#include<iostream>
using namespace std;

int main(){
	int t, pa,pb,c;
	double ga,gb;

	cin>>t;
	while(t--){
		c=0;
		cin>>pa>>pb>>ga>>gb;
		while(pa<=pb){
			pa+=pa*ga/100;
			pb+=pb*gb/100;
			c++;
			if(c==101) break;
		}
		if(c==101) cout<<"Mais de 1 seculo."<<endl;
		else cout<<c<<" anos."<<endl;
	}
	return 0;
}

