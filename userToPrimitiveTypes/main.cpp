#include <iostream>
#include <string>

using namespace std;

class Grades
{
	private:
		double grade;
	public:
		Grades(double grade) : grade(grade) {}
		
		operator double()
		{
			return grade;
		}
		operator char()
		{
			if (grade >= 90) return'A';
			else if (grade >= 80) return 'B';
			else if (grade >= 70) return 'C';
			else if (grade >= 60) return 'D';
			else if (grade >= 50) return 'E';
			else return 'F';
		}
};

int main(int argc, char const **argv)
{
	Grades grade(stoi(argv[1]));
	char char_grade = grade;
	cout << "You have got " << char_grade << " grade" << endl;
	return 0;
}
