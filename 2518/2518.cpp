#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int N, H, C, L;
	float area;
	while(cin>>N){
		cin>>H>>C>>L;
		area=sqrt(H*H+C*C)*N*L;
		area/=10000;
		cout<<fixed<<setprecision(4)<<area<<endl;
	}
	return 0;
}
