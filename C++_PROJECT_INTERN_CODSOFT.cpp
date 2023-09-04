#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "GUESS MY NUMBER GAME IT'S TOO HARD TOO SOLVE'\n\n\n";

	do
	{
		cout << "ENTER A GUESS B/W 1 TO 100 : : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "IT'S TOO HIGH!!!\n\n";
		else if (guess < num)
			cout << "IT'S TOO LOW!!\n\n";
		else
			cout << "\nYES YOU ARE CORRECT YOU GOT IT IN.. " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}



