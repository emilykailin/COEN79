/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 6
 * File 3 of 7
 */


#ifndef STUDENT_H
#define STUDENT_H
#include <vector>

namespace coen79 {
    class Student {
	public: 
	    // constructors
	    Student() : id(0), name("") {};
	    Student(int student_id, std::string student_name) : id{student_id}, name{student_name} {};
	    ~Student();

	    // overload operators
	    bool operator==(const Student& other) const {
		return this->id == other.id && this->name == other.name;
	    }

	    friend std::istream& operator>>(std::istream& is, Student &);

//	protected:
	    int id;
	    std::string name;

    };

    typedef std::vector<Student> info;
}

#endif
