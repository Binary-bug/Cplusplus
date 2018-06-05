#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;



int main(){
	double penny,nickel,dime,quarter,halfdollar,dollar;
	cout<<"How many pennies do you have?\n";
	cin>>penny;
	(penny>1)?(cout<<"You have "<<penny<<" pennies\n"):(cout<<"You have "<<penny<<" penny\n");
	cout<<"How many nickels do you have?\n";
	cin>>nickel;
	(nickel>1)?(cout<<"You have "<<nickel<<" nickels\n"):(cout<<"You have "<<nickel<<" nickel\n");
	cout<<"How many dimes do you have?\n";
	cin>>dime;
	(dime>1)?(cout<<"You have "<<dime<<" dimes\n"):(cout<<"You have "<<dime<<" dime\n");
	cout<<"How many quarters do you have?\n";
	cin>>quarter;
	(quarter>1)?(cout<<"You have "<<quarter<<" quarters\n"):(cout<<"You have "<<quarter<<" quarter\n");
	cout<<"How many half dollars do you have?\n";
	cin>>halfdollar;
	(halfdollar>1)?(cout<<"You have "<<halfdollar<<" half dollars\n"):(cout<<"You have "<<halfdollar<<" half dollar\n");
	cout<<"How many dollars do you have?\n";
	cin>>dollar;
	(dollar>1)?(cout<<"You have "<<dollar<<" dollars\n"):(cout<<"You have "<<dollar<<" dollar\n");

	cout<<"You have "<<(1*penny+5*nickel+10*dime+25*quarter+50*halfdollar+100*dollar)/100<<" dollars\n";
	return 0;
}
