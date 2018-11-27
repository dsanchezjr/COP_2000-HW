#include <iostream>	
#include <cmath>
#include <iomanip>
using namespace std;

int main()

{

	//variables
	int input;
	double area;
	double length;
	double width;
	double radius;

	//constants
	const double PI = 3.14159;

	//Display the menu.

	cout << "Haverly's Room Calculator : "<< endl;
	cout << " ************************" << endl;
	cout << endl << endl;
	cout << "1. Square Room"<< endl;
	cout << "2. Rectangular Room" << endl;
	cout << "3. Round Room" << endl;
	cout << "4. Quit" << endl;
	cout << endl << endl;

	
	//D.1) Ask the user for the appropriate input.
	cout << "Please enter a menu item(1 - 4) > " << endl;

	//B) Read in the input from the user.
	cin >> input;
	
	
	//D) Will be using a switch menu statement.
	//C) Validate user input(must input 1 through 4).
			
	switch (input)
	{
		//read the input and Perform the appropriate calculation and read the input.
	case 1:
		cout << "You've entered option 1- The area for a square room. " << endl;
		cout << "Please enter the length followed by the width of the room ";
		cout << "separated by a space > ";
		cin >> length >> width;
		area = length * width;
		cout << "The total area of the square room is " << area << " sq/ft"<< endl;
		break;

	case 2:
		cout << "You've entered option 2- The area for a rectangular room " << endl;
		cout << "Please enter the length followed by the width of the room ";
		cout << "separated by a space > ";
		cin >> length >> width;
		area = length * width;
		cout << "The total area of the square room is" << area <<" sq/ft"<< endl;
		break;
	case 3:
		cout << "You've entered option 3- The area for a round room " << endl;
		cout << "Please enter the length followed by the width of the room ";
		cout << "separated by a space > ";
		cin >> radius;
		area = PI *pow(radius,2.0);
		cout << "The total area of the round room is" << area << " sq/ft" << endl;
		break;
	case 4:
		cout << "Enter 4 to quit " << endl;
		cout << endl;
		cout << "Thank you for using Harvey's Room calcluator! " << endl;
		break;

	default: cout << "This is an invalid choice...program exiting... "<< endl;
		
	}
	

			//D.2) Read the input.
			//D.3) Perform the appropriate calculation 
			//D.4) Output the result
	return 0;
	system("pause");
}
