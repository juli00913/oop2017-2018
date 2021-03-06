#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
	string name_;
	long id_;
public:

	Employee() 
	: name_("default"), id_(-1)
	{
		cout << "default constructor called..." << endl;
	}
	Employee(const string& name, long id) 
	: name_(name), id_(id)
	{}
	
	const string& get_name() const {
		return name_;
	}
	
	long get_id() const {
		return id_;
	}
	
	void print() const {
		cout << "Emp:\t" << name_ << "\t" << id_ << endl;
	}

};

class Manager: public Employee {
	int level_;
public:

	Manager(const string& name, long id, int level)
	: Employee(name, id), level_(level)
	{}

	int get_level() const {
		return level_;
	}
	
	
	void print() const {
		// Employee::print();
		cout << "Mng:\t" << get_name() << "\t" << get_id() << "\t" << level_ << endl; 
	}
/*	
	void proba() {
		name_ = "proba";
	}
*/

};


int main() {

	Employee e1 = Employee("ivan", 1001);
	e1.print();

	Manager m1 = Manager("pesho",10001, 1);
	m1.print();
	

	return 0;
}

