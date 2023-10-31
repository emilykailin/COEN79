/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 6
 * File 1 of 7
 */

#ifndef VECTORCLASSH
#define VECTORCLASSH
#include "student.h"
#include <vector>

namespace coen79 {
    class SCUClass {
	public:
	    SCUClass() {}
	    ~SCUClass() {}

	    void insert(const Student &student);
	    void remove(const Student &student);
	    void traverse(int(*process)(const int, Student &, void *), void *p);
	    std::vector<Student> info;
    };

    std::ostream& operator<<(std::ostream& os, const coen79::Student& student);

    //Test function. This is declaration only
    int testVectorClass();
}

#endif //VECTORCLASSH
