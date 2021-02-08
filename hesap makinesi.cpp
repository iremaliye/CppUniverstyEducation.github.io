#include <iostream>
using namespace std;
int main()
{
	int sayi1,sayi2,islem,sonuc;
	cout<<"---------------"<<endl;
	cout<<"-   +    -    -"<<endl;
	cout<<"-   *    /    -"<<endl;
	cout<<"---------------"<<endl;
	cout<<"sayi1:"; cin>>sayi1;
	cout<<"sayi2:"; cin>>sayi2;
	cout<< " 1.+ \n 2.-\n 3.* \n 4./ \n";
	cout<< "islem:";
	cin>>islem;
	
	switch(islem)
	{
		case 1:
			sonuc=sayi1+sayi2;
			break;
		case 2:
			sonuc=sayi1-sayi2;
			break;
		case 3:
			sonuc=sayi1*sayi2;
			break;
		case 4:
			sonuc=sayi1/sayi2;
			break;
		default:
		cout<<"Lutfen 1 ile 4 arasýnda sayi giriniz";
		break;
			
	}
	cout<<"sonuc :"<<sonuc;
	return 0;
}
