/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 7
 * File 2 of 8
 */

#ifndef SCUORGH
#define SCUORGH
#include "person.h"

namespace coen79 {
    class SCUOrg {
	public: 
//	    ~SCUOrg();
	    void insert(coen79::Person *data);
	    void remove(coen79::Person *data);
	    void traverse(int (*mapFunc)(const int, Person *, void *), void *);

	private:
	    std::vector<Person *> org;
    };

    int testCase1(void);
}

#endif
