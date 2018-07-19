#include<iomanip>
#include<ios>
#include<iostream>
#include<string>


using namespace std;



int main(){
	// ask for and read the students name
	cout << "Please enter your first name";
	string name;
	cin >> name;

	cout << "Hello, " << name << "!" << endl;

	// ask for and read the midterma and final grades

	cout << "Please enter your midterm and finals grades: ";

	double midterm, finals;

	cin >> midterm >> finals;

	//ask for the homework grades
	cout << "Enter all your homework grades, "
		"followed by end of file";

	int count = 0;
	double sum = 0;

	double x;

	while (cin >> x){
		++count;
		sum+=x;
	}

	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
	     << 0.2 * midterm + 0.4 * finals + 0.4 * sum / count
	     << setprecision(prec) << endl;

	return 0;
}	
