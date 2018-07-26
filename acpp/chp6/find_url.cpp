#include<vector>
#include<string>
#include"url.h"

using std::vector;
using std::string;


vector<string> find_urls(const string& s){
	vector<string> ret;
	iter b = s.begin(), e = s.end();

	// look at the entire input
	while(b!=e){

		// look for one or more letters followed by ://

		b = url_begin(b,e);

		//if we found it 
		if(b!=e){
			//get the rest of the url
		iter after = url_end(b,e);

		//remember the url
		ret.push_back(string(b,after));

		b = after;
		}
	}
	return ret;
}	
