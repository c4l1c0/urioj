#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double x,s;
	int c=0;

	while(1){
		cin>>x;
		if(x<0 || x>10){
			cout<<"nota invalida"<<endl;
		}
		else {
			c++;
			s+=x;
		}

		if(c==2){
			c=0;
			s/=2;
			cout<<"media = "<<fixed<<setprecision(2)<<s<<endl;
			while(1){
				cout<<"novo calculo (1-sim 2-nao)"<<endl;
				cin>>s;
				if(s==1 || s==2) break;
			}
			if(s==2) break;
			s=0;
		}
	}
	return 0;
}
				



