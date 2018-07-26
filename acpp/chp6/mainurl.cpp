#include"url.h"
#include<iostream>

using std::vector;
using std::string; using std::cin ; using std::cout ; using std::endl;

int main(){
	string url;
	cin >> url;
	vector<string> urls = find_urls(url);
	for(int i=0; i!=urls.size();++i) cout << urls[i] ;
return 0;
}
