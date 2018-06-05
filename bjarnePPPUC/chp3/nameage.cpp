#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
	cout<<"please enter your first name and age\n";
	string first_name="???";
	int age=0;
	cin >> first_name;
	cin >> age;
	cout << "Hello, "<<first_name<<"(age "<<age*12<<")\n";
}

