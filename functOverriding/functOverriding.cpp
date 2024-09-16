#include <iostream>

using namespace std;

class Student
{
	public:
		string name;

		Student (string name) : name(name) {}

		virtual void print()
		{
			cout << "Student Name: " << name << endl;
		}

};

class MedicalStudent : public Student
{
	public:
		string specilization;

		MedicalStudent (string name, string specilization) : Student(name), specilization(specilization) {}

		void print() override
		{
			cout << "Studnet Name: " << name << " with Specilization "<< specilization << endl;
		}
};

int main(int argc, char const **argv)
{
	Student *student[2] = {new Student("Farhan"), new MedicalStudent("Ammar", "Neuro")};
	for (int i= 0 ; i < 2; i++)
	{
		student[i]->print();
	}
	return 0;
}
