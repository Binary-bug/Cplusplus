#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;


int main(){
	int number_of_words=0;
	string previous="";
	string current;
	while(cin>>current){
		++number_of_words;
		if(previous==current)
			cout<<"word_number "<<number_of_words<<" repeated word: "<<current<<'\n';
		previous=current;
	}
	return 0;
}
