# Name: Emily Chen
# Email: ekchen@scu.edu
# Student ID: 00001649289
#
# Assignment : COEN 79 HW 6
# File 7 of 7

CXX = g++
CXXFLAGS = -std=c++11

# source files
SOURCES = student.cxx scuclass.cxx scuclassmain.cxx scuclassmaintest.cxx

# object files
OBJECTS = $(SOURCES:.cxx = .o)

# target executable
TARGET = scuclass

# compliation and linking
$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@
	./scuclass

