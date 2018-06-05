#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;



int main(){
	cout<<"Please enter the number of miles\n";
	double miles;
	cin>>miles;
	cout<<miles<<" are equivalent to "<<(1.609*miles)<<" kilometers\n";
	return 0;
}
