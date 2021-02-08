#include <iostream>
using namespace std;

int main()
{
	float kacgun; 
	int kackisi;
	cout<<"Bir isci isi kac gunde bitirmektedir?"<<endl;
	cin >> kacgun;
	cout<<"Toplam kac kisi calismaktadir?"<<endl;
	cin >> kackisi;
	cout<<"Ýsi bitirme suresi:"<<(float)kacgun/kackisi<<" gundur"<<endl;
	return 0;
	
}
