#include "std_lib_facilities.h"

int main(){
	cout<<"Please enter the calculation you want it to do\n";
	double x,y;
	char c;
	cin>>x>>y>>c;
	switch(c){
		case '+':
		cout<<"The sum of "<<x<<" and "<<y<<" is "<<x+y<<'\n';
		break;
		case '-':
		cout<<"The difference of "<<x<<" and "<<y<<" is "<<x-y<<'\n';
		break;
		case '*':
		cout<<"The product of "<<x<<" and "<<y<<" is "<<x*y<<'\n';
		break;
		case '/':
		cout<<"The quotient of "<<x<<" and "<<y<<" is "<<x/y<<'\n';
		break;
		default :
		cout<<"Unknown operation\n";
		break;
	}
	return 0;
}

