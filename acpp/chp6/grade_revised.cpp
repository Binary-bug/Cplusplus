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

	vector<Student_info> did,didnt;
	Student_info student;
	
	//read all the records,separating them based on whetehr all homework was done
	while(read(cin,student)){
		if(did_all_hw(student)) did.push_back(student);
		else	didnt.push_back(student);
	}

	// check that both groups contain data
	if(did.empty()) {
		cout << "No student did any homework!" <<endl;
		return 1;
	}
	if(didnt.empty()){ // the empty member function yields  true if the container is empty and false otherwise
		cout<<"Every student did all the homework!" << endl;
		return 1;
	}

	return 0;
}
