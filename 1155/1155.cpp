#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float sum, n;
	sum=0;
	for(float i=1;i<101;i++){
		n=1/i;
		sum+=n;
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
