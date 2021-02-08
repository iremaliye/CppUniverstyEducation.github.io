#include <iostream>
using namespace std;
int main()
{
	//for la döngü
	for(int i=1;i<=10;i++)
	cout<<i<<endl;
	cout<<endl;
	
	//while la döngü
	int i=1;
	while(i<=10)
	cout<<++i<<endl;
	
	
	//do while ile döngü
	int i=1;
	do{
		cout<<i++<<endl;
		
	}	while(i<=10);
}
