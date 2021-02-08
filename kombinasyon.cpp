#include <iostream>
using namespace std;
int faktoriyelr (int n){
	if(n==1)
	return 1;
	return n*faktoriyelr(n-1);
}
int faktoriyel(int x){
	int carpim =1;
	for(int i=x;i>0;i--){
		carpim*=i;
	}
	return carpim;
}
int kombinasyon(int n, int r){
	return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
}



int main()
{
	cout<<faktoriyel (3)<<endl;
	cout<<faktoriyel (5)<<endl;
	cout<<kombinasyon (5,2)<<endl;	
	cout<<faktoriyelr(5)<<endl;
}
























































































































































