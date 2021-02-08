#include <iostream>
using namespace std;
int main(){
	//1 den 100 e tek sayýlar
	int a;
	a=1;
	while(a<100){
		cout<<a<<",";
		a+=2;
       
	}
	cout<<endl;
	
	
//50 70 arasý çift sayýlar

	for(int i=50; i<=70; i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	
	}cout<<endl;
	
//100 den 70 e kadar 7 ye bölünebilme
	for (int i=100 ; i>=70; i--){
		if(i%7==0){
			cout<<i<< " ";
		}
		
	}
	cout<<endl;
	
//1 ve 100 arasýnda 3 e ve 7 ya tam bölünebilen	
	for(int i=0;i<100; i++)
    if(i%3==0 && i%7==0){
		cout<<i<<" ";
	}
	cout<<endl;
	//veya 
	for(int i=0;i<100;i++)
	if(i%3==0){
		if(i%7==0)//ve ->hem hemde
			cout<<i<<" ";
	}
	cout<<endl;
	
	
	//1 ve 100 arasýnda 3 e veya 7 ya tam bölünebilen	
	for(int i=0;i<100; i++)
    if(i%3==0 || i%7==0){
		cout<<i<<" ";
	}
	cout<<endl;
	
	
	
	
	
	
	
	
	
}
	

	



