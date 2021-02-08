#include <iostream>
using namespace std;
int main()
{
	int mesafe,hiz,sure;
	cout<<"Alinan mesafe kac km dir?"<<endl;
	cin>>mesafe;
	cout<<"Hiz kac km/saattir?"<<endl;
	cin>>hiz;
	cout<<mesafe<<"km lik mesafeyi "<<mesafe/hiz<<" saat"<<((float)mesafe/hiz-(int)mesafe/hiz)*60<<" dakikalik surede alir."<<endl;
}
