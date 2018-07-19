#include<iostream>
#include<string>

using namespace std;

// using std::cout ; we can say that we intend to use the name cout 
// to mean std::cout exclusively

//Note : using declaration behaves same like other names; if a using declaration
// appears within braces, the name that it defines has its given meaning
// from where it is defined to the closing brace

int main(){
	std::cout << "Please enter your first name" << std::endl;

	std::string name;
	std::cin >> name;

	const std::string greeting = "Hello, " + name + "!" ;
	
	// the number of blanks surrounding the greeting
	const int pad = 1;

	// total number of rows to write
	const int rows = 2*pad + 3;
        const std::string::size_type cols = greeting.size() + pad * 2 + 2;
	// separate the output from the input
	std::cout << std::endl;

	// in variant : we have written r rows so far
	
	for(int r =0; r !=rows; ++r) {
		std::string::size_type c = 0;
		while(c!=cols){
			if(r == pad + 1 && c == pad + 1){
				std::cout << greeting;
				c+= greeting.size();
		       } else {
			      if(r==0 || c == 0 || r == rows -1 || c == cols -1 ) cout << "*";
			      else cout << " ";
			      ++c;
		       }
		}
	cout<<endl;
	}
}	
