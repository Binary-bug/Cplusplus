#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;


int main(){
	cout << "Please enter your first and second names\n";
	string first,second;
	cin >>first>>second;
	string name = first + ' ' + second;
	cout << "Hello, " << name << "\n";
	return 0;
}
