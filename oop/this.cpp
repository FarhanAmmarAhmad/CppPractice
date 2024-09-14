#include <iostream>
using namespace std;

class Student;

void print_report(Student *student);

class Student
{
	public:
		string name;
		int age;
	Student(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	void print()
	{
		cout << "Variable \"this\" has memory address " << this << endl;
		cout << "Student Name: " << this->name << endl;
		cout << "Student age: " << this->age << endl;
	}

	void graduating()
	{
		cout << "Congrtulations!" << endl;
		print_report(this);
	}

	Student& set_name(string name)
	{
		this->name = name;
		return *this;
	}
	Student& set_age(int age)
	{
		this->age = age;
		return *this;
	}
};

void print_report(Student *student)
{
	cout << "Student Name: " << student->name << endl;
	cout << "Student Grade" << student-> age << endl;
}

int main(int argc, char const **argv)
{
	Student A("Farhan", 33);
	Student B("Ahmad", 34);

	cout << "The object A has memory address " << &A << endl;
	A.print();
	cout << "The object B has memory address " << &B << endl;
	B.print();

	A.set_name("Ammar").set_age(21);
	B.set_name("Sayal").set_age(40);

	A.graduating();
	B.graduating();

	return 0;
}	
