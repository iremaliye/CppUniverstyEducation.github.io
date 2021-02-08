#include <iostream>
using namespace std;
int main()
{
	int sayi=7,a;
	cout<<"1 ile 10 arasinda bir sayi tahmin et? :"<<endl;
	for(int i=1;i<14;i++){
		cout<<"Tahmininiz:";
		cin>>a;
		if(sayi<a){
			cout<<"Daha kucuk"<<endl;
			continue;
		}
		else if(sayi>a){
			cout<<"Daha buyuk"<<endl;
			continue;
		}
		else if (sayi==a){
			cout<<i<<". denemede bulundunuz."<<endl;
			break;
		}
	}
	return 0;
}

