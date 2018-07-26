#include<algorithm>
#include<string>
#include<cctype>


using namespace std;

bool not_url_char(char c){
	static const string url_ch = "~;/?:@=&$-_.+!*'(),";

	return !(isalnum(c) || find(url_ch.begin(),url_ch.end(),c) != url_ch.end());
}


string::const_iterator url_end(string::const_iterator b , string::const_iterator e){
	return find_if(b,e,not_url_char);
}



/*
static is a storage class specifier. local variables that are declared static are preserved across invocations of the functions

find is similar to find_if, except that instead of calling a predicate , it looks for the specific value given as its third argument

if the value that we want is present, the function returns an iterator denoting the first occurrence of the value in the given sequqnce

else it returns the second argument

*/


// beg[-1] == *(beg-1)

string::const_iterator url_begin(string::const_iterator b, string::const_iterator e){
	static const string sep = "://";

	typedef string::const_iterator iter;

	iter i = b;

	while((i = search(i,e,sep.begin(),sep.end())) != e){

		//make sure the separator isnt at the beginning or end of the line
		if(i !=b && i+sep.size() !=e ){
			iter beg = i;
			while(beg != b && isalpha(beg[-1])) // if a container supports indexing so does its iterator
				--beg; // beg[-1] is the character at the position immediately before that beg denotes

			//is there at least one appropriate character before and after the separator?
			if(beg != i && !not_url_char(i[sep.size()]))
				return beg;
		}

		// the separator we  found wasn't part of a URL advance i past this separtor
		i += sep.size();
	}
	return e;
}

/*
search takes two pairs of iterators, the first pair denotes the sequence in which we are looking and  the second pair denotes
the sequence that we wish to locate.

if search fails it returns the second iterator. i.e. after the call to search, either i denotes (one pas the end of the input string)
or it dentoes a : that is followed by "//"
*/
   
