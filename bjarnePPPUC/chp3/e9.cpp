#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>


using namespace std;


int main(){
	cout<<"Please enter an integer\n";
	int integer=7;
	cin>>integer;
	if(integer==0)cout<<"zero\n";
	else if(integer==1)cout<<"one\n";
	else if(integer==2)cout<<"two\n";
	else if(integer==3)cout<<"three\n";
	else if(integer==4)cout<<"four\n";
	else cout<<"Not a number i know\n";
	return 0;
}
