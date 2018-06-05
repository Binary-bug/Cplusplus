#include "std_lib_facilities.h"


int square(int x){
	int a=x*x;
	return a;
}

int main(){
	int sum=0;
	cout<<"Enter the # grains of rice the can be handled\n";
	int value;
	cin>>value;
	int i;
	for(i=1;i<=64 && sum<=value;i++)
		sum+=square(i);
	cout<<i;
	return 0;
}
