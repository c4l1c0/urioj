#include<iostream>
using namespace std;

int main(){
	int s;
	int t=3;
	string b;
	while(t--){
		s=0;
		while(1){
			getline(cin,b);
			if(b=="caw caw") break;
			else if(b=="---") s+=0;
			else if(b=="--*") s+=1;
			else if(b=="-*-") s+=2;
			else if(b=="-**") s+=3;
			else if(b=="*--") s+=4;
			else if(b=="*-*") s+=5;
			else if(b=="**-") s+=6;
			else if(b=="***") s+=7;

		}
		cout<<s<<endl;
	}
	return 0;
}
