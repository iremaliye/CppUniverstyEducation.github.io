#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Birinci sayiyi giriniz:";
	cin>>x;
	cout<<"İkinci sayiyi giriniz:";
	cin>>y;
	cout<<"Ucuncu sayiyi giriniz:";
	cin>>z;
	
	
	if(x>y && x>z){
		cout<<"En buyuk sayi:"<<x;
		if (y<z)
		{
		cout<<"En kucuk sayi:"<<y;}
		else 
		cout<<"En kucuk sayi:"<<z;
		
		}
	
	else if (y>x && y>z){
		cout<<"En buyuk sayi:"<<y; 
		if (x<z){
		cout<<"En kucuk sayi:"<<x;}
		else {
		cout<<"En kucuk sayi:"<<z;}
		
	}
	else {
		cout<<"En buyuk sayi:"<<z;
		if (y<x){
		cout<<"En kucuk sayi:"<<y;}
		else {
		cout<<"En kucuk sayi:"<<x;}
        }
	
	return 0;
}
	
