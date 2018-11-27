
// Homework-3 (M3A2)
// COP 2000 C120 06:35pm
// by Domingo Sanchez Jr.
// Oct.,18 2018

//Rhoda's Strikeforce Gym needs a program that will show membership fees for different types of memberships chosen by 
//the user.  The gym charges a base inital fee of $1,200, along with a rate increase (compounded yearly) based on the user's
//membership rating chosen below. The program will also need to perform calculation for specified membership for 10 years 
//and output.
//
//Membership types:
//
//Gold Membership = 1% fee
//Silver Membership = 2% fee
//Bronze Membership = 4% fee


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



// Function prototypes.
void memberRateGold();
void memberRateSilver();
void memberRateBronze();



int main()
{

	int user_menu_input;             // User input menu choice

	do

	{

		// Display the menu.
		cout << endl;
		cout << "     Welcome to Rhoda's Strikeforce Gym!! " << endl;
		cout << "x---------------------------------------------x" << endl;
		cout << "           Membership Fee Calculator" << endl;
		cout << endl;
		cout << " 1.  Gold" << endl;
		cout << " 2.  Silver" << endl;;
		cout << " 3.  Bronze" << endl;
		cout << " 4.  Quit" << endl << endl;
		cout << "Please Enter your membership mevel ( 1-3 , or 4 to Quit) > ";


		cin >> user_menu_input;
		cout << endl;
		cout << fixed << showpoint << setprecision(2) << left;



		// Input Validation - options 1-4 will loop back to input until correct choice is made. 

		while (user_menu_input < 1 || user_menu_input > 4)
		{
			cout << "Invalid selection, please try again. Select Option 1-4 " << endl;
			cin >> user_menu_input;
		}

		// Switch menu used for user input.

		switch (user_menu_input)
		{
		case 1:
			memberRateGold(); //Gold membership.
			break;
		case 2:
			memberRateSilver(); //Silver membership.
			break;
		case 3:
			memberRateBronze(); //Bronze membership.
			break;
		case 4:                 //Quit option.
			cout << "You've entered 4 to quit " << endl;
			cout << " Thank you for using Rhoda's Fee Calculator" << endl;
			break;

		}

	} while (user_menu_input != 4);

	system("pause");
	return 0;
}

void memberRateGold()
{
	//Variables.
	int Year;                   // Used to display initial year of membership.
	double cost;                // Cost each year, which is membership rate * INITIAL FEE.

	//Constants
	const double GOLD = 1.01;		  // Silver Membership rate fee of %2 with 1.0 added for compound interest calcluation.
	const float INITIAL_FEE = 1200;   // Initial fee of $1200.

	//Perform calculation for specified membership for 10 years and output.
	for (Year = 1, cost = GOLD * INITIAL_FEE; Year <= 10; Year++)
	{
		cout << "Year " << setw(5) << Year << " $" << cost << endl;
		cost *= GOLD;
	}

}

void memberRateSilver()

{
	//Variables.
	int Year;                   // Used to display initial year of membership.
	double cost;                // Cost each year, which is membership rate * INITIAL FEE.

	//Constants
	const double SILVER = 1.02;		  // Silver Membership rate fee of %2 with 1.0 added for compound interest calcluation.
	const float INITIAL_FEE = 1200;   // Initial fee of $1200.

	//Perform calculation for specified membership for 10 years and output.
	for (Year = 1, cost = SILVER * INITIAL_FEE; Year <= 10; Year++)
	{
		cout << "Year " << setw(5) << Year << " $" << cost << endl;
		cost *= SILVER;
	}

}

void memberRateBronze()

{
	//Variables.
	int Year;                   // Used to display initial year of membership.
	double cost;                // Cost each year, which is membership rate * INITIAL FEE.

	//Constants.
	const double BRONZE = 1.04;      // Bronze  Membership rate fee of %2 with 1.0 added for compound interest calcluation.
	const float INITIAL_FEE = 1200;  // Initial fee of $1200.

	//Perform calculation for specified membership for 10 years and output.
	for (Year = 1, cost = BRONZE * INITIAL_FEE; Year <= 10; Year++)
	{
		cout << "Year " << setw(5) << Year << " $" << cost << endl;
		cost *= BRONZE;
	}

}