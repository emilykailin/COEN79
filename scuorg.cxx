/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 7
 * File 2 of 6
 */

#include <iostream>
#include <new>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "scuorg.h"
#include "person.h"

using namespace std;

namespace coen79 {
#ifndef EMPTY
    //Preconditions: receives valid Student id integer
    //Postconditions: removes student given student id
    void SCUOrg::remove(coen79::Person *data) { 
	for (int i = 0; i < org.size(); i++) {
	    if (data->getId() == org[i]->getId()) {
	//	delete org[i];
		org.erase(org.begin() + i);
		return;
	    }
	}
    }

    //Precondition: receives valid Student data
    //Postcondition: adds a new student to the list as the head
    void SCUOrg::insert(coen79::Person *data) {
    	org.push_back(data);
    }

     std::ostream& operator<<(std::ostream& os, const coen79::Person& person) {
	os << "ID: " << person.id << ", Name: " << person.name;
	return os;
     }

#endif
    //Precondition: receives valid arguments
    //Postcondition: travels through the list of students
    void SCUOrg::traverse(int (*mapFunc)(const int, coen79::Person *, void *), void *p) { 
	for (size_t i = 0; i < org.size(); i++)
	    (void) mapFunc(i, org[i], p);

    }

//    coen79::SCUOrg::~SCUOrg() {
//	for (int i = 0; i < org.size(); i++) 
//	    delete org[i];	    
//    }
}
