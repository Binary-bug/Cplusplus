#include "std_lib_facilities.h"

int main(){
	cout<<"Please enter the calculation you want it to do\n";
	int x,y;
	string x1,y1;
	char c;
	vector<string> names={"zero","one","two","three","four","five","six","seven","eight","nine"};
	cout<<"Enter d for digits or v for values\n";
	cin>>c;
	cout<<"enter the operators and operands\n";
	if(c=='d')cin>>x>>y>>c;
	else{	
		cin>>x1>>y1>>c;
		int j=0;
		for(string i:names){
			if(x1==i)x=j;
			if(y1==i)y=j;
			j++;
		}
	}

	if(x<0 || x >9 || y<0 || y>9){cout<<"Invalid range\n";return 0;}
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

