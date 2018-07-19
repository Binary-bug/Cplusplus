#include<iomanip>
#include<ios>
#include<iostream>
#include<string>
#include<algorithm>

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

	double x;
	vector<double> homework;

	while(cin>>x) homework.push_back(x);

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	
	//corner cases
	if(size == 0){
		cout<< endl << "You must enter your grades. "
				"Please try again." << endl;
		return 1;
	}

	// sort the vector
	sort(homework.begin(),homework.end());

	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2 : homework[mid];

}	
