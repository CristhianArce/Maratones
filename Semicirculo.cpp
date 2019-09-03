#include<iostream>
#define PI 3.14159265
using namespace std;
float erosion(float x,float y){
	float r;
	r=PI*((x*x+y*y)/2)/50;
	return r;
}
int main(){
	int N,year;
	cin>>N;
	float x,y;
	for(int i=1;i<=N;i++){
		cin>>x>>y;
		year=erosion(x,y);
		cout<<year<<endl;
	}
	cout<<"END OF OUTPUT\n";
}