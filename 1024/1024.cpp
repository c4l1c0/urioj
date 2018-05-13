#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	string s,temp;
	char c;
	cin>>t;
	cin.ignore();
	while(t--){
		temp.clear();
		s.clear();
		getline(cin,s);
		for(int i=s.length()-1;i>=0;i--){
			if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
				if(i<(s.length()+1)/2)
					temp.push_back(s.at(i)+2);
				else
					temp.push_back(s.at(i)+3);
			}
			else{
				if(i<(s.length()+1)/2)
					temp.push_back(s.at(i)-1);
				else
					temp.push_back(s.at(i));
			}
		}
		cout<<temp<<endl;
	}
	return 0;
}
