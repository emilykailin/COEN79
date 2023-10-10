#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;
#include "scuclass.h"

namespace coen79 {
    void SCUClass::addStudent() {
	int i = 0;
	int count = 0 ;
	while ( i <  NSTUDENTS) {
	    if (student[i] != NULL) {
		i++;
		count++;
	    }
	    if (count == NSTUDENTS) {
		cout << "Maximum number of students reached."<<endl;
		cout << "Please remove students before adding more students."<<endl;
	    }
	}

	cout << "Input new student id"<<endl;
	getline(int id);
	student[NSTUDENT+1].id = id;
    }

    void SCUClass::erase() {
	cout << "Input the id number of the student you want to remove."<<endl;
	getline(int id);
	int i = 0;
	int count = 0 ;
	while ( i <  NSTUDENTS) {
	    if (student[i] != NULL) {
		i++;
		count++;
	    }

	for (int j = 0; j < NSTUDENT; j++) {
	    if (student[j].id == id) {
		student[j].id = student[count].id;
		student[count].id = NULL;
		count--;
	    }
	}




	
    }
}
