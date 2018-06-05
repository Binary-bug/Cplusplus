#include "std_lib_facilities.h"


int main(){
	vector<string> words;
	string disliked="Broccoli";
	
	for(string input;cin>>input;)words.push_back(input);

	for(int i=0;i<words.size();i++)if(words[i]!=disliked)cout<<words[i]<<'\n';else cout<<"BLEEP"<<'\n';
	return 0;
}
