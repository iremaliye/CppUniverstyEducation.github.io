#include <iostream>
using namespace std;
int main()
{
	int isi;
	cout<<"Ýsi degerini giriniz: ";
	cin>>isi;
	if (isi<=30)
	{
		cout<<"Problem yok";
		}
	else if ((isi>=40)&&(isi<60)){
		cout<<"Yuksek isi!!!";
		}
	else if (isi>60){
		cout<<"Ýtfaiye cagir!!!";
	}
	return 0;
	}
