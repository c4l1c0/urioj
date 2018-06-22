#include<iostream>
using namespace std;

int main(){
	int l, v, m;
	while(cin>>l){
		m=0;
		while(l--){
			cin>>v;
			if(m<=v) m=v;
		}
		if(m<10) cout<<"1"<<endl;
		else if(m>=20) cout<<"3"<<endl;
		else cout<<"2"<<endl;
	}
	return 0;
}
