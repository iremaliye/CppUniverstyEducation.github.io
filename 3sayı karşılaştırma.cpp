#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Birinci sayiyi(a) giriniz:";
	cin>>a;
	cout<<"Ýkinci sayiyi(b) giriniz:";
	cin>>b;
	cout<<"Ucuncu sayiyi(c) giriniz:";
	cin>>c;
	
	if((b<a && a<c)||(c<a && a<b)){
		cout<<"a, b ile c arasýnda bir sayidir."<<endl;
	}
	else{
		cout<<"a,b ile c arasinda bir sayi degildir."<<endl;
		}
	
	if(a<=b && a<=c){
		cout<<"a,b veya c'den daha buyuk degildir"<<endl;
	}
	else{
		cout<<"a,b veya c'den buyuktur"<<endl;
		}
	if(a<=b && a<c){
		cout<<"a,b'ye esit ve ayni zamanda c'den kucuktur"<<endl;
		}
	else{
		cout<<"a,b'ye esit degil ve c'den kucuk degildir"<<endl;
		}
	if(a==b && a==c){
		cout<<"Uc sayi birbirine esittir"<<endl;
		}
	else {
		cout<<"Uc sayi birbirine esit degildir"<<endl;
			}
			return 0;
}   
