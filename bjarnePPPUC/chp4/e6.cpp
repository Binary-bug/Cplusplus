#include "std_lib_facilities.h"


int main(){
	vector<string> names={"zero","one","two","three","four","five","six","seven","eight","nine"};
	vector<int> digits={0,1,2,3,4,5,6,7,8,9};
	cout<<"if you want to convert digit to value, enter v else enter d"<<'\n';
	char x=' ';
	cin>>x;
	if(x=='v'){
		int y;
		cout<<"Enter the digit you want to convert\n";
		cin >> y;
		cout<<names[y]<<'\n';
	}
	else{
		string temp;
		cout<<"Enter the string you want to convert\n";
		cin>>temp;
		int i=0;
		for(string x:names){
			if(x==temp) break;
			i++;
		}
		cout<<"the digit is "<<i<<'\n';
	}
	return 0;
}
