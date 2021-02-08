#include <iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Ucgenin kenar uzunluklarini giriniz:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b){
		cout<<"Bu bir dik ucgendir."<<endl;
	}
	else {
		cout<<"BU bir dik ucgen degildir."<<endl;
		
	}
	return 0;
	
}
