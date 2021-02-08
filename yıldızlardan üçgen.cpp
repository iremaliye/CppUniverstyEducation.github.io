#include <iostream>
using namespace std;
int main()
{
	int b;
	cout<<"Boyutu giriniz:"<<endl;
	cin>>b;
	for(int i=0;i<b;i++){
		for (int j=0; j<i+1;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	
	
	int c;
	cout<<"Boyutu giriniz:"<<endl;
	cin>>c;
	for(int i=0;i<c;i++){
		for(int j=0;j<c-(i+1);j++){
		cout<<" ";      }      //boþluklar
		for (int j=0; j<i+1;j++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	
}
