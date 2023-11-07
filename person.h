/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 7
 * File 2 of 8
 */

#include <iostream>
#include <string>
#include <vector>

#ifndef SCUPERSONH
#define SCUPERSONH
namespace coen79 {
    class Person {
	public: 
	    // constructors
	    Person() : id(0), name("") {};
	    Person(int person_id) : id(person_id), name("") {};
	    Person(int person_id, std::string person_name) : id(person_id), name(person_name) {};
	    const int getId() const{return id;}
	    
	    // overload operators
	    friend std::ostream& operator<<(std::ostream& os, const Person &);
	    friend std::istream& operator>>(std::istream& is, Person &);
	    bool operator==(const Person& other) const {
		        return id == other.id && name == other.name;
	    }
	protected:
	    int id;
	    std::string name;

    };

    class Student: public Person {
	public: 
	    // constructors
	    Student() : yearEnter(0) {};
	    Student(int student_id) : Person(student_id), yearEnter(0) {};
	    Student(int student_id, std::string student_name, int student_year) : Person(student_id, student_name), yearEnter(student_year) {};
	    const int getYear() const {return yearEnter;}

	    // overload operators
	    friend std::ostream& operator<<(std::ostream& os, const Student &);
	    friend std::istream& operator>>(std::istream& is, Student &);

	protected:
	    int yearEnter;
    };

    class Staff: public Person {
	public: 
	    // constructors
	    Staff() : title("") {};
	    Staff(int staff_id) : Person(staff_id), title("") {};
	    Staff(int staff_id, std::string staff_name, std::string staff_title) : Person(staff_id, staff_name), title(staff_title) {};
	    std::string getTitle() const {return title;}

	    // overload operators
	    friend std::ostream& operator<<(std::ostream& os, const Staff &);
	    friend std::istream& operator>>(std::istream& is, Staff &);

	protected:
	    std::string title;
    };

    typedef std::vector<Person> info;


}


#endif

