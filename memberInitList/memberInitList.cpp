#include <iostream>
#include <string>
using namespace std;

class Major
{
	public:
		string name;
		Major (string name) : name(name) {}
};

class Minor
{
	public:
		string name;

		Minor (string name) : name(name){}
};
class Student
{
	public:
		string name;
		int admitYear;
		int gradYear;
		string id;
		Major major;
		Minor minor;
		
		Student (string name, int admitYear, string major, Minor &minor) : 
			name(name),
			admitYear(admitYear),
			gradYear(admitYear+4),
			id(name.append(to_string(admitYear))),
			major(Major(major)),
			minor(minor)
			{}

		void print()
		{
			cout << "Name: " << this->name << endl
				<< "Admit Year: " << this->admitYear << endl
				<< "Grad Year: " << this->gradYear << endl
				<< "Student ID: " << this->id << endl
				<< "Major: " << this->major.name << endl
				<< "Minor: " << this->minor.name << endl;
		}
};

class PostGradStudent : public Student{
	public:
		bool postGradStatus;
		PostGradStudent (bool postGradStatus, string name, int admitYear, string major, Minor &minor) : 
			Student(name, admitYear, major, minor),
			postGradStatus(postGradStatus) {}

		void print()
		{
			Student::print();
			cout << "Post Graduation Status: " <<(this->postGradStatus ? "true" : "false" ) << endl;	
		}
};

int main(int argc, char const **argv)
{
	Minor minor("Robotics");	
	PostGradStudent B(true, "Farhan", 2007, "Electrical Engineering", minor);
	Student A("Farhan", 2007, "Electrical Engineering", minor);
	B.print();
	return 0;
}
