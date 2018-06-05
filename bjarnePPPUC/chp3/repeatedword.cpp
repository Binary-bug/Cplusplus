#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;


int main(){
	string previous="";
	string current;
	while(cin>>current){
		if(previous==current)
			cout<<"repeated word:"<<current<<"\n";
		previous=current;
	}
	return 0;
}
