/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 0001649289
 *
 * Assignment: COEN 79 HW 6
 * File 6 of 6
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <new>
#include <cstring>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include "person.h"
#include "scuorg.h"

using namespace std;

namespace coen79 {
    int printNode(const int idx, coen79::Person *d, void *) { 
	cout << setw(2) << idx << ": " << d << endl;
	return 0;
    }

    int counter (const int idx, coen79::Person *p, void *vp) { 
	int *ip = (int *) vp;
	++*ip;
	return 0;
    }

    int testCase1() {
	std::vector<Person> info;
	SCUOrg scu;
//	const char *placeholder = "Student";
	char cmd;

	while (cin >> cmd) {
	    if (cmd == 'A' || cmd == 'X') {
		Person d;
		cin >> d;
		if (cmd == 'A')
		    scu.insert(&d);
		else
		    scu.remove(&d);
	    }
	    else if (cmd == 'L') {
		int n = 0;
		scu.traverse(counter, &n);
		cout << "People: " << n << endl;
		for (size_t i = 0; i < info.size(); i++) 
		    scu.traverse(printNode, NULL);
	    }
	}
	return EXIT_SUCCESS;
    }
}

int main() {
    freopen("TestStudentData.txt", "r", stdin);
    coen79::testCase1();
    fclose(stdin);
    return EXIT_SUCCESS;
}

