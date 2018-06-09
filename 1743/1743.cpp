#include<iostream>
using namespace std;

int main(){
	bool a[5],b[5];
	char c='Y';
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4];
	for(int i=0;i<5;i++){
		if(!(a[i]^b[i])){
			c='N';
			break;
		}
	}
	cout<<c<<endl;
	return 0;
}
