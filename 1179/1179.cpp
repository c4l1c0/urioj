#include<iostream>
using namespace std;

int main(){
	int in=0;
	int parc=0;
	int imparc=0;
	int par[5], impar[5];
	for(int i=0;i<15;i++){
		cin>>in;
		if(in%2==0){
			par[parc]=in;
			parc++;
		}
		else{
			impar[imparc]=in;
			imparc++;
		}
		if(parc==5){
			cout<<"par[0] = "<<par[0]<<endl;
			cout<<"par[1] = "<<par[1]<<endl;
			cout<<"par[2] = "<<par[2]<<endl;
			cout<<"par[3] = "<<par[3]<<endl;
			cout<<"par[4] = "<<par[4]<<endl;
			parc=0;
		}
		else if (imparc==5){
			cout<<"impar[0] = "<<impar[0]<<endl;
			cout<<"impar[1] = "<<impar[1]<<endl;
			cout<<"impar[2] = "<<impar[2]<<endl;
			cout<<"impar[3] = "<<impar[3]<<endl;
			cout<<"impar[4] = "<<impar[4]<<endl;
			imparc=0;
		}
	}
	for(int i=0;i<imparc;i++){
		cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
	}
	for(int i=0;i<parc;i++){
		cout<<"par["<<i<<"] = "<<par[i]<<endl;
	}
	return 0;
}
