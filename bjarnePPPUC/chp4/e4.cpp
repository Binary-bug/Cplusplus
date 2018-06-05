#include "std_lib_facilities.h"




int main(){
	int a=1;
	int b=100;
	char x=' ';
	for(int i=0;i<7;i++){
		cout<<"Is your number less than "<<(a+b)/2<<'\n';
		cin>>x;
		if(x=='y')b=(a+b)/2;
		else a=(a+b)/2;
		if(a==b)break;
	}
	cout<<"The number on your mind is "<<a; 
	return 0;
}
