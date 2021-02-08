#include<iostream>
using namespace std;
int main()
{
	cout<<"Bir sayi giriniz:";
	int boyut;
	cin>>boyut;
	for(int i=1;i<=boyut;i++){
		for(int k=1;k<i;k++){
			cout<<" ";
		}
		for(int j=1;j<=boyut-i+1;j++){
			cout <<"*";
		}
		cout<<endl;
	}
}

