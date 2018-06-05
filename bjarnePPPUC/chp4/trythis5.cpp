#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<cmath>


using namespace std;


int square(int x){
	int val=0;
	for(int i=0;i<x;i++){
		val=val+x;
	}
	return val;
}

int main(){
	for(int i=0;i<100;i++)
		cout<<i<<'\t'<<square(i)<<'\n';
return 0;
}

