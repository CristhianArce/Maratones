#include<iostream>
#include<algorithm>
using namespace std;
int max(unsigned int x){
	unsigned int a=0;
	while(x!=1){
		if(x%2!=0){
			x=x*3+1;
			a++;
		}else{
			x/=2;
			a++;
		}		
	}
	a++;
	return a;
}
int main(){
	int i,j,tem_i,tem_j;
	
	while(cin>>i>>j){
		tem_i=i;
		tem_j=j;
		if(i>j){
			swap(i,j);
		}
		int ant=0, mayor=0;
		for(unsigned int x=i;x<=j;x++){
			ant=max(x);
			if(mayor<=ant){
				mayor=ant;
			}	
		}
	cout<<tem_i<<" "<<tem_j<<" "<<mayor<<endl;
	}
	return 0;
}