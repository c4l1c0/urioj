#include<iostream>
#include<string>
using namespace std;

int main(){
	int t, sum;
	string s;
	cin>>t;
	while(t--){
		sum=0;
		cin>>s;
		for(int i=0; i<s.length(); i++){
			switch(s[i]){
				case '1':
					sum+=2;
					break;
				case '2':
					sum+=5;
					break;
				case '3':
					sum+=5;
					break;
				case '4':
					sum+=4;
					break;
				case '5':
					sum+=5;
					break;
				case '6':
					sum+=6;
					break;
				case '7':
					sum+=3;
					break;
				case '8':
					sum+=7;
					break;
				case '9':
					sum+=6;
					break;
				case '0':
					sum+=6;
					break;
			}
		}
		cout<<sum<<" leds"<<endl;
	}
	return 0;
}
