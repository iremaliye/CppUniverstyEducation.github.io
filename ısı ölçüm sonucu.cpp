#include <iostream>
using namespace std;
int main()
{
	int isi;
	cout<<"�si degerini giriniz: ";
	cin>>isi;
	if (isi<=30)
	{
		cout<<"Problem yok";
		}
	else if ((isi>=40)&&(isi<60)){
		cout<<"Yuksek isi!!!";
		}
	else if (isi>60){
		cout<<"�tfaiye cagir!!!";
	}
	return 0;
	}
