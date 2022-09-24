#include<iostream>
using namespace std;
int main()
{
	float x,y,s,m,d,r;
	//Ingreso datos
	cout<<"Ingrese el valor de x=:";
	cin>>x;
	cout<<"Ingrese el valor de y=:";
	//Operaciones
	cin>>y;
	s=x+y;
	m=x*y;
	d=x/y;
	r=x-y;
	//Muestra los resultados.
	cout<<"Las sumas de"<<x<<"+"<<y<<"="<<s<<endl;
	cout<<"Las multiplicaciones de"<<"*"<<y<<"="<<m<<endl;
	cout<<"Las division de"<<x<<"/"<<y<<"="<<d<<endl;
	cout<<"Las restas de "<<x<<"-"<<y<<"="<<r<<endl;
	return 0;
}

