#include <iostream> 

using namespace std; 

int main() 

{ 

    float kAlan,dAlan; 

    float a, b; 

    cout<<"karenin kenar uzunlugunu giriniz:"; 

    cin>>a; 

    kAlan = a*a; 

    cout<<"dikdortgenin uzun kenar uzunlugunu giriniz:"; 

    cin>>a; 

    cout<<"dikdortgenin kýsa kenar uzunlugunu giriniz:"; 

    cin>>b; 

    dAlan = a*b; 

    cout<<"karenin alani"<<(float)kAlan<<endl; 

    cout<<"dikdortgeninalani:"<<(float)dAlan<<endl; 

    return 0 ; 
}
    
