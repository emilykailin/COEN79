/* Name: Emily Chen
 * Email: ekchen@scu.edu
 * Student ID: 00001649289
 *
 * Assignment: COEN 79 HW 7
 * File 1 of 7
 */

#include <iostream>
#include "person.h"

using namespace std;

namespace coen79 {

    std::istream& operator>>(std::istream& is, coen79::Person& person) {
	is >> person.id >> person.name;
	return is;
    }

}
