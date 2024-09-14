#include <iostream>
#include <string>
using namespace std;

class Counter{
	public:
		int count;
	public:
		Counter(int initialCount): count(initialCount){}
		Counter(): count(0){}
	void print()
	{
		cout << "Counter "<< count << endl;
	}
	void increment()
	{
		count++;
	}
};

void increment_3x(Counter &c){
	c.increment();
	c.increment();
	c.increment();
}

	


int main(int argc, char const **argv)
{
	Counter counter(stoi(argv[1]));
	increment_3x(counter);
	counter.print();
	return 0;
}

