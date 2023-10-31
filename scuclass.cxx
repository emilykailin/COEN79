/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 6
 * File 2 of 7
 */

#include <iostream>
#include <iomanip>
#include <new>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "scuclass.h"
#include "student.h"

using namespace std;

namespace coen79 {
#ifndef EMPTY
    
    void SCUClass::insert(const Student &student) {
	info.push_back(student);
    }

    void SCUClass::remove(const Student &student) {
	auto it = std::find(info.begin(), info.end(), student);
	if (it != info.end())
	    info.erase(it);
    }

    void SCUClass::traverse(int(*mapFunc)(const int, Student &, void *), void *p) {
	for (size_t i = 0; i < info.size(); i++)
	    (void)mapFunc(i, info[i], p);
    }

    std::ostream& operator<<(std::ostream& os, const Student& student) {
	os << "ID: " << student.id <<", Name: " << student.name;
	return os;
    }

//    bool operator==(const Student& left, const Student& right) {
//	return left.id == right.id && left.name == right.name;
//    }
#endif
}
