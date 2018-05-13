#include<iostream>
#include<string>
using namespace std;

int main(){
	int posf;
	char x;
	string s;
	while(1){
		cin>>x>>s;
		if(x=='0' && s=="0") break;
		while(1){
			posf=s.find(x, 0);
			if(posf!=string::npos){
				s.erase(posf,1);
			}
			else break;
		}
		while(1){
			posf=s.find('0',0);
			if(posf==0 && s.length()>1){
				s.erase(posf,1);
			}
			else break;
		}
		if(s.empty()) s="0";
		cout<<s<<endl;
	}
			
	return 0;
}
