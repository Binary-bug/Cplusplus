#include<map>
#include<iostream>
#include<string>

using namespace std;

int main(){
	string s;
	map<string,int> counters; // store each word and an associated counter

	// read  the input, keeping track of each word and how often we see it
	while(cin >> s)
		++counters[s];

	// write the words and associated counts
	for(map<string,int>::const_iterator it = counters.begin(); it != counters.end(); ++it){
		cout << it->first << "\t" << it->second << endl;
	}
	return 0;
}

/* Because a map holds key-value pairs, we need to mention not only the thype of the values but also the type of the keys.

map<string,int> counters;

defines counters as a map that holds values of type int that are associated with keys of type string.

*/


