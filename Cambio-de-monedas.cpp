#include<iostream>
#define MAX 7498 
using namespace std;
int main(){
	int monedas[5]={50,25,10,5,1};//vector de los tipos de monedas
	int r,s;
	while(cin>>r){ // Monto a devolver
	long vueltas[MAX];// vector de vueltas
	vueltas[0]=1; // condición inicial 
	for(int i=1;i<=r;i++)
			vueltas[i]=0;
	for(int i=0;i<=4;i++){
		for(int j=1;j<=r;j++){
			if(j>=monedas[i]){
				vueltas[j]+=vueltas[j-monedas[i]];
			}
		}
		
	}
		cout<<vueltas[r]<<endl;
	}
	
}