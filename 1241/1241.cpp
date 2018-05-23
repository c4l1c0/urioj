#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	string s,ss;
	cin>>t;
	while(t--){
		cin>>s>>ss;
		if(s.find(ss, s.length()-ss.length())!=string::npos) {
			cout<<"encaixa"<<endl;
		}
		else {
			cout<<"nao encaixa"<<endl;
		}
	}
}
