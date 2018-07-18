#include<iostream>
#include<string>

int main(){
	// ask for the person's name
	std::cout << "Please enter your name";
	std::string name;
	std::cin >> name;

	std::cout << "Hello," << name << "!" << std::endl;
	return 0;
}
