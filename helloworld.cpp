// recur.cpp -- using recursion
#include <iostream>
#include <ctime>

#pragma warning(disable : 4996)

int countdown(int n);
void delayFunction(float secs);

using namespace std;


int main()
{

	
	int n = countdown(4); // call the recursive function
	cout << n << ": Kaboom!\n";

	return 0;
}
int countdown(int n)
{
	using namespace std;
	cout << "Counting down ... " << n << endl;

	delayFunction(1);

	if (n > 0)
		countdown(n - 1); // function calls itself
	return n;
}

/*void delayFunction(float secs) {
	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay);
}*/

void delayFunction(float secs) {
	time_t delay = secs;
	time_t start = time(NULL);
	time_t buffer;
	while (time(NULL) - start < delay);
	time_t currentTime = time(NULL);
	cout << "actual time: " << ctime(&currentTime) << endl;
}