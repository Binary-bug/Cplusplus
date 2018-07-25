#include<algorithm>
#include<vector>
#include<string>
#include<ios>
#include<stdexcept>
#include<iostream>
#include<iomanip>


#include "grade.h"
#include "Student_info.h"

using namespace std;

int main(){

	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0; // length of the longest name

	//read and store all the students data.
	//Invariant: students contains all the students records read so far
	// maxlen contains the lenght of htelongest name in students

	while(read(cin,record)){
		//find length of longest name
		maxlen = max(maxlen,record.name.size());
		students.push_back(record);
	}

	sort(students.begin(),students.end(),compare);

	//write the names and grades
	for (vector<Student_info>::size_type i = 0; i != students.size(); ++i){
		cout << students[i].name << string(maxlen + 1 - students[i].name.size(),' ');

		//compute and write the grade
		try{
			double final_grade = grade(students[i]);
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec);
		}catch(domain_error e){
			cout << e.what();
		}
		cout<<endl;
	}
	return 0;
}
