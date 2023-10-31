/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 0001649289
 *
 * Assignment: COEN 79 HW 6
 * File 6 of 7
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <new>
#include <cstring>
#include <vector>
#include <algorithm>
#include "student.h"
#include "scuclass.h"

using namespace std;

namespace coen79 {
    std::istream& operator>>(std::istream& is, coen79::Student& student) {
       is >> student.id;
       is.ignore(); 
       std::getline(is, student.name);
       return is;
    }

    int printNode(const int idx, Student &d, void *) { //
	cout << setw(2) << idx << ": " << d << endl;
	return 0;
    }

    int counter (const int idx, Student &d, void *vp) { //
	int *ip = (int *) vp;
	++*ip;
	return 0;
    }

    int testVectorClass() {
	std::vector<Student> info;
	SCUClass scu;
	string cmd;

	while (cin >> cmd) {
	    if (cmd == "A" || cmd == "X") {
		Student d; 
		cin >> d;
		if (cmd == "A")
		    scu.insert(d);
		else 
		    scu.remove(d);
	    }
	    else if (cmd == "L") {
		int n = 0;
		scu.traverse(counter, &n);
		cout << "Students: " << n << endl;
		scu.traverse(printNode, NULL);
	    }
	}
	return EXIT_SUCCESS;
    }
}

