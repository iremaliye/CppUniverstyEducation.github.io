#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a,b,c;
	cout<<"a kenarini giriniz:";
	cin>>a;
	cout<<"b kenarini giriniz:";
	cin>>b;
	c= sqrt (a*a+b*b);
	cout<<"hipotenus(c)="<<c<<endl;
	cout<<"Ucgenin cevresi:"<<a+b+c<<endl;
	cout<<"Ucgenin alan�:"<<(a+b)/2<<endl;
	
	
}
