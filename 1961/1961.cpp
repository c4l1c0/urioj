#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int p[b];
	bool w=1;
	for(int i=0;i<b;i++){
		cin>>p[i];
		if(i>0){
			if(p[i] - p[i-1] > a) w=0;
			cout<<p[i]-p[i-1]<<endl;
		}
	}
	if(w) cout<<"YOU WIN"<<endl;
	else cout<<"GAME OVER"<<endl;
	return 0;
}
