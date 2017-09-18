#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int side{ 0 };
	int roll{ 0 };
	cout << "Enter ctrl + z in place of a number to exit at any time." << endl << endl;
	while (!cin.fail()) {
		srand(time(0));
		cout << "Enter the amount of sides your dice needs: ";
		cin >> side;
		cout << "Enter how many times you need to roll this die: ";
		cin >> roll;
		while (cin.fail())
		{
			system("pause");
			return 0;
		}
		cout << endl << "Your rolls are below." << endl;
		for (int i = 0; i < roll; i++)
			cout << 1 + rand() % side << endl;
	}

	system("pause");
	return 0;

}