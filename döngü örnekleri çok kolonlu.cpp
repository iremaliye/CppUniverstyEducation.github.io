#include <iostream>
using namespace std;
int main()
{
	//1den 100 e kadar olan 15in katlar�
	//1den 30 a kadar olan 5in katlar�	
	// 100 den 50 ye kadar olan 10 un katlar�
	//2 den 64 e kadar olan 2 nin �stleri
	
	int i=15;
	int j=5;
	int k=100;
	int l=2;
	while(i<100){
		cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<l<<endl;
		i+=15;
		j+=5;
		k-=10;
		l*=2;
	}
	cout <<endl;
	
	int us =2;
	for(int i=1;i<=6;i++)
		cout<<i*15<<"\t"<<i*5<<"\t"<<100-(i-1)*10<<"\t"<<us<<endl;
	us*=2;
}
