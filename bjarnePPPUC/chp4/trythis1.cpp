#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;


int main(){
	constexpr double yen_to_dollar=1;
	constexpr double kroner_to_dollar=2;
	constexpr double pound_to_dollar=3;

	double currency;
	char unit=' ';
	cout<<"Please enter your currency\n";
	cin>>currency>>unit;
	if(unit=='y')cout<<currency*yen_to_dollar<<"\n";
	else if(unit=='k')cout<<currency*kroner_to_dollar<<"\n";
	else if(unit=='p')cout<<currency*pound_to_dollar<<"\n";
	else cout<<"unknown currency\n";
	return 0;
}
