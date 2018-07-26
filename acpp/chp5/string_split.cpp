#include<vector>
#include<string>
#include"split.h"
#include<iostream>

using namespace std;

int main(){
	string s;

	//read and split each line of input
	while(getline(cin,s)){ //  getline reads the entire input at a time; part of the string library
		vector<string> v = split(s);
	
	//write each word in v
	for(vector<string>::size_type i = 0; i != v.size(); ++i) cout << v[i] << endl;
	for(int j = 0; j !=100 ; ++j) cout << "*";cout<<endl;
	}
return 0;
}


//getline takes two arguments; istream from which to read; the second is a reference to a string into which to store what is read

//returns a reference to the istream from which we read
