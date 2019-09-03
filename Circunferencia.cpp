#include<iostream>
#include<math.h>
#include <iomanip>
#include <cstdio>
using namespace std;
double determinante(double a,double b,double c,double d){
	double x;
	x=(a*d)-(b*c);
	return x;
}
double calculo_x(double x_0,double x_1,double x_2,double y_0,double y_1,double y_2){
	double x_m,d_1,d_2,a,b,c,d;
	a=y_1-y_0;
	b=(x_2-x_0)/2;
	c=x_0-x_1;
	d=(y_2-y_0)/2;
	d_1=determinante(a,b,c,d);
	a=y_1-y_0;
	b=y_1-y_2;
	c=x_0-x_1;
	d=x_2-x_1;
	d_2=determinante(a,b,c,d);
	x_m=((x_1+x_2)/2)+(y_2-y_1)*(d_1/d_2);
	return x_m;
}
double calculo_y(double x_0,double x_1,double x_2,double y_0,double y_1,double y_2){
	double y_m,d_1,d_2,a,b,c,d;
	a=y_1-y_0;
	b=(x_2-x_0)/2;
	c=x_0-x_1;
	d=(y_2-y_0)/2;
	d_1=determinante(a,b,c,d);
	a=y_1-y_0;
	b=y_1-y_2;
	c=x_0-x_1;
	d=x_2-x_1;
	d_2=determinante(a,b,c,d);
	y_m=((y_1+y_2)/2)+(x_1-x_2)*(d_1/d_2);
	return y_m;
}
double circunferencia(double x_m,double y_m,double x_0,double y_0){
	double r,c;
	r=sqrt((pow((x_m-x_0),2))+(pow((y_m-y_0),2)));
	c=2*r* 3.141592653589793;
	return c;
}
int main(){
	double x_0,x_1,x_2,y_0,y_1,y_2;
	double x_m,y_m,c;
	while(cin>> x_0>>y_0>>x_1>>y_1>>x_2>>y_2){
	x_m=calculo_x(x_0,x_1,x_2,y_0,y_1,y_2);
	y_m=calculo_y(x_0,x_1,x_2,y_0,y_1,y_2);
	c=circunferencia(x_m,y_m,x_0,y_0);
	cout<<fixed<<setprecision(2)<<c<<endl;
	}
	return 0;
}