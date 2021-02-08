//n=5,2b+y ise n=2b+y --> b=(n-y)/2
//n/2=2-->2*(n-i)+1,2i+1
//n/2 sonrasý 2(n-i)+1

//   *      2b 1y
//  ***     1b 3y
// *****    0b 5y
//  ***     1b 3y
//   *      2b 1y

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Boyutu giriniz:"<<endl;
	cin>>n;
	for(int i=0;i<n; i++){
		int y,b;
		
		if(i<=n/2){
			y=2*i+1;
		}
		else if(i==n)
		y=2*(i-1)+1;
		
		else {
		y=2*(n-i-1)+1;
		}
		
		b=(n-y)/2;
		for(int j=0;j<b;j++){//boþluklar
		     cout<<" ";
		}
		for(int j=0;j<y;j++){//yýldýzlarrrrrrr
		     cout<<"*";
		}
			cout<<endl;
	}

}
