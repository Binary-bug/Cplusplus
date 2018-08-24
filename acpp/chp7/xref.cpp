#include<string>
#include<iostream>
#include<vector>
#include<map>
#include "split.h"


using namespace std;

map<string, vector<int> > xref(istream& in, vector<string> find_words(const string&) = split){

	string line;
	int line_number = 0;
	map<string,vector<int> > ret;

	// read the nextline
	while(getline(in,line)){
			++line_number;

			// break the input line into words
			vector<string> words = find_words(line);

			// remember that each word occurs on the current line
			for(vector<string>::const_iterator it  = words.begin(); it!=words.end(); ++it)
				ret[*it].push_back(line_number);
			}
			return ret;
}

// find_words defines a function parameter which patures our intent to pass to xref the function to use to split the input words

// = split after the definition of find_words, indicates that this parameter has a default argument.

int main(){

	map<string,vector<int> > ret = xref(cin);

	// write the results

	for(map<string,vector<int> >::const_iterator it = ret.begin(); it!= ret.end(); ++it){
		// write the word
		cout << it->first << "occurs on line(s): ";

		//followed by one or more line numbers
		vector<int>::const_iterator line_it = it->second.begin();
		cout << *line_it; // write the first line number;

		++line_it;

		//write the rest of the line numbers, if any
		while(line_it != it->second.end()){
			cout << "," << *line_it;
			++line_it;
		}
		cout << endl;
	}
	return 0;
}


