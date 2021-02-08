#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<" Birinci sayiyi giriniz:";
	cin>>x;
	cout<<" Ýkinci sayiyi giriniz:";
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
		cout<<"Ýlk sayi kucuktur"<<endl;
		cout<<"Ýkinci sayi kucuk degildir"<<endl;
		}
	else{
		cout<<"Ýlk sayi kucuk degildir"<<endl;
	    cout<<"Ýkinci sayi kucuk degildir"<<endl;
	    }
	if(x>y){
		cout<<"Ýlk sayi buyuktur"<<endl;
		cout<<"Ýkinci sayi buyuk degildir"<<endl;
	}
	
	if(x<=y){
		cout<<"Ýlk sayi kucuk esittir"<<endl;
	}
	else{
		cout<<"Ýlk sayi kucuk esit degildir"<<endl;
		}
	if(x>=y){
		cout<<"Ýkinci sayi kucuk esittir"<<endl;
		}
	else{
		cout<<"Ýkinci sayi kucuk esit degildir"<<endl;
	}
}

