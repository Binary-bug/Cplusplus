#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<cmath>


using namespace std;


int main(){
	string operation;
	double op1,op2;
	cin>>operation>>op1>>op2;
	if(operation == "+" || operation == "plus") cout<<(op1+op2)<<"\n";
	if(operation == "-" || operation == "minus") cout<<(op1-op2)<<"\n";
	if(operation == "*" || operation == "mul") cout<<(op1*op2)<<"\n";
	if(operation == "/" || operation == "div") cout<<(op1/op2)<<"\n";
	return 0;
}
