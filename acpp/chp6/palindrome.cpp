#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

bool is_palindrome(const string & s){
	return equal(s.begin(),s.end(),s.rbegin());  // rbegin returns an iterator that starts with the last element in the container
}						     
// equals assumes both strings are of equal size so no need of end iterator in reverse sequence


int main(){
	string name;
	while(cin >> name){
		if(is_palindrome(name)) cout << "You have entered a palindrome " << endl;
		else cout << "The given string is not a palindrome " << endl;
	}
	return 0;	
}

