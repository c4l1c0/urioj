#include<iostream>
using namespace std;

int main(){
	int x,y,i,g,d,c;
	x=0;
	y=0;
	i=0;
	g=0;
	d=0;
	c=0;

	while(1){
		cin>>x>>y;
		if(x>y) i++;
		else if(x<y) g++;
		else d++;
		c++;
		cout<<"Novo grenal (1-sim 2-nao)"<<endl;
		cin>>x;
		if(x==2){
			cout<<c<<" grenais"<<endl;
			cout<<"Inter:"<<i<<endl;
			cout<<"Gremio:"<<g<<endl;
			cout<<"Empates:"<<d<<endl;
			if(i>g) cout<<"Inter venceu mais"<<endl;
			else if(i<g) cout<<"Gremio venceu mais"<<endl;
			else cout<<"Não houve vencedor"<<endl;
			break;
		}
	}
	return 0;
}

