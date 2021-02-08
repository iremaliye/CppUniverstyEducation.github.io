#include <iostream>
using namespace std;
int main()
{

	//kullanýcý -1 girene kadar toplayýp ortalam bulma
	
		int toplam = 0;
		int okunan=0;
		int sayi=0;
	for (int i=0;okunan!=-1;i++){
	    cout<<"bir sayi giriniz:"<<endl;
	    cin>>okunan;
	    toplam+=okunan; //toplam=toplam+okunan
	    sayi++;
	    
		}
		sayi--;
		cout<<"toplam:"<<toplam<<endl;
		cout<<"sayi:"<<sayi<<endl;	
		cout<<"Ortalama:"<< (float)toplam/5<<endl;
		
		
		//bu þekilde de olur
		int toplam = 0;
		int okunan=0;
		int sayi=0;
	for ( ;;){
	    cout<<"bir sayi giriniz:"<<endl;
	    cin>>okunan;
	    if(okunan==-1)
	    break;
	    toplam+=okunan; //toplam=toplam+okunan
	    sayi++;
	    
		}
		cout<<"toplam:"<<toplam<<endl;
		cout<<"sayi:"<<sayi<<endl;	
		cout<<"Ortalama:"<< (float)toplam/5<<endl;
	
	
	
	//while lý hali
	
	int toplam = 0;
		int okunan=0;
		int sayi=0;
	//for ( ;;){
		while(true)
	    cout<<"bir sayi giriniz:"<<endl;
	    cin>>okunan;
	    if(okunan==-1)
	    break;
	    toplam+=okunan; //toplam=toplam+okunan
	    sayi++;
	    
		}
		cout<<"toplam:"<<toplam<<endl;
		cout<<"sayi:"<<sayi<<endl;	
		cout<<"Ortalama:"<< (float)toplam/5<<endl;
	
	
	
}
