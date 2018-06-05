#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	cout<<"please enter two integers a and b";
	int a,b;
	cin>>a>>b;
	if(a/b * b + a % b == a) // a < b trivially true, if a > b  is simply a = b * q + r notation where q and r are both integers
	 	cout<<"true";
	return 0;
}
