#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<" Birinci sayiyi giriniz:";
	cin>>x;
	cout<<" �kinci sayiyi giriniz:";
	cin>>y;
	if(x==y){
	    cout<<"Sayilar esittir"<<endl;
	    cout<<"Sayilar farkli degildir"<<endl;
	    }
	else{
		cout<<"Sayilar esit degildir"<<endl;
		cout<<"Sayilar farklidir"<<endl;
		}
	if (x<y){
		cout<<"�lk sayi kucuktur"<<endl;
		cout<<"�kinci sayi kucuk degildir"<<endl;
		}
	else{
		cout<<"�lk sayi kucuk degildir"<<endl;
	    cout<<"�kinci sayi kucuk degildir"<<endl;
	    }
	if(x>y){
		cout<<"�lk sayi buyuktur"<<endl;
		cout<<"�kinci sayi buyuk degildir"<<endl;
	}
	
	if(x<=y){
		cout<<"�lk sayi kucuk esittir"<<endl;
	}
	else{
		cout<<"�lk sayi kucuk esit degildir"<<endl;
		}
	if(x>=y){
		cout<<"�kinci sayi kucuk esittir"<<endl;
		}
	else{
		cout<<"�kinci sayi kucuk esit degildir"<<endl;
	}
}

