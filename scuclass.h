namespace coen79 {
    class Student {
	public:
	    int id;
	    Student() : id(0) {}
	    Student(int i): id{i} {}

	friend ostream& operator<<(ostream& os, const Student &s);
    };

    class SCUClass {
    public:
	const size_t NSTUDENTS = 30;
	SCUClass();
	const Student &list();
	void addStudent();
	void erase();

    friend ostream& operator<<(ostream& os, const SCUClass &);

    private:
	const size_t ID_SIZE = 6;
	Student students[30];
	int next;
    };
}
