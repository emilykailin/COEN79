#include <iomanip>
#include <iostream>

using namespace std;
#include "scuclass.h"

namespace coen79 {
    static const Student NoStudent;

    const Student &SCUClass::list() {
	if (next >= NSTUDENTS)
	    return NoStudent;
	return students[next++];
    }

    SCUClass::SCUClass(): next(0) {
	for (int n = 0; n < NSTUDENTS ; n++)
	    students[i] = Student(n / ID_SIZE + 1, n % ID_SIZE + 1);
    }

    ostream& operator<<(ostream& os, const Student &s) {
	if (s.id == NoStudent.id)
	    cout << "End of Student List";
	cout << s.id;
	return os;
    }

    ostream operator<<(ostream& os, const SCUClass &d) {
	cout << "List at " << d.next <<endl;
	for (int n = 0; n < d.NSTUDENTS; n++)
	    cout << n << ": " <<d.students[i] << endl;
	return os;
    }
}
       	
