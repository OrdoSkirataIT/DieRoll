#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int side{ 0 };
	int roll{ 0 };
	//User exit method prompt
	cout << "Enter ctrl + z in place of a number to exit at any time." << endl << endl;
	while (!cin.fail()) { //While ctrl+z is not entered
		srand(time(0));//seed random numbers for rolling die
		//prompt for die size (d20, d6, d8, etc) and get user input
		cout << "Enter the amount of sides your dice needs: "; 
		cin >> side;
		//prompt for roll amount and get user input
		cout << "Enter how many times you need to roll this die: ";
		cin >> roll;
		while (cin.fail()) //check for user exit method
		{
			system("pause");
			return 0;
		}
		//output roll results
		cout << endl << "Your rolls are below." << endl;
		//repeat as many times as user requested
		for (int i = 0; i < roll; i++)
			//calculate roll range and output each roll on its own line
			cout << 1 + rand() % side << endl;
	}
//end program statements because it's a habit
	system("pause");
	return 0;

}
