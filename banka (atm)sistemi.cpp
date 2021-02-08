#include <iostream>
using namespace std;
int main()
{
    int paramiktari;
    cout<<"Z bankasina hosgeldiniz"<<endl<<"Lutfen kartinizi takin..."<<endl;
    cout<<"Kartinia ait sifreyi girin:";
    string sifre;
    cin>>sifre;
     if(sifre== "abcde")
        cout<<"Tesekkürler"<<endl<<"Ýþlemler Listesi:"<<endl<<"   a-para çekme"<<endl<<"   b-bakiye görüntüleme"<<endl<<"Yapmak istediginiz islemi secin:";
    
     else if (sifre != "abcde")
     {
    cout<<"Gecersiz Sifre"<<endl<<"Kartinizi almayi unutmayin"<<endl;
    }
    string islem;
    cin>>islem;
    if(islem== "a")
    {
         cout<<"Para miktarini giriniz:";
    cin>>paramiktari;
        if(paramiktari<=1000){
    cout<<"Kalan bakiyeniz:"<<1000-paramiktari<<endl;
        }
        else if(paramiktari>1000){
            cout<<"Yetersiz bakiye"<<endl;
        }
        cout<<"Paranizi aliniz"<<endl<<"Kartinizi almayi unutmayin"<<endl;
    }
    else if(islem=="b")
    {
        cout<<"Bakiyeniz 1000 tl"<<endl;
    cout<<"Kartýnýzý almayý unutmayýn"<<endl;
    }
    return 0;					
}
