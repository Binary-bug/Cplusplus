#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


int main(){
	int a{20};
	char c {a};
	int b = c;
	if(a!=b)
		cout<<"oops!: "<<a<<"!="<<b<<'\n';
	else
		cout<<"wow! we have large characters";
	return 0;
}
