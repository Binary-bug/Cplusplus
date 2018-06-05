#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;



int main(){
	cout<<"Please enter an integer\n";
	int integer;
	cin>>integer;
	!(integer%2)?(cout<<"The value "<<integer<<" is an even number\n"):(cout<<"The value "<<integer<<" is an odd number\n");
	return 0;
}
