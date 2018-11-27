// Homework-5 (M5A2)
// COP 2000 C120 06:35pm
// by Domingo Sanchez Jr.
// Nov.,15 2018
//
// The Missing numbers game.
//
// The game will allow the user to play the missing number
// game in which the user will have to guess the missing number by formulating 
// the sum of the two outer columns, which will equal the number of the inner column number.
// The user will have 3 boards to play with that will cycle randomly and will have 3 guesses.


#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Prototype functions.
int beginGame(int playedBoard[]);
void displayBoard(int board[][3]);
void instructions();
bool testWinner(int ans, int boardNum, int ansBoard[]);

// Main
int main()
{

	// Arrays
	int ansArray[3] = { 14, 15, 8 };     // Array holding answer board.
	int usedBoards[3] = { 0 };           // Array for used boards. 

	// Varaibles
	int boardNum;            // Current board being played.
	int numberGuesses = 0;   // Number of guesses. Initiated at 0.
	int ans;                 // User's answer.
	int numberWins = 0;      // Number of wins. Initiated at 0.
	bool winner;             // Function is a boolean and determines true or false if answer is correct. 


	int board1[4][3] = { 38, 11, 83,        // Board 1 array.
						15, 6, 33,
						11, 2, 20,
						86, 0, 95 };

	int board2[4][3] = { 28, 10, 55,        // Board 2 array.
						89, 17, 98,
						22, 4, 31,
						69, 0, 78 };

	int board3[4][3] = { 90, 9, 45,         // Board 3 array.
						66, 12, 48,
						34, 7, 70,
						44, 0, 26 };



	cout << setprecision(2) << fixed;     // Display format. 

	instructions();
	do
	{
		boardNum = beginGame(usedBoards);  // Generates a random board to play.
		numberGuesses = 0;

		do
		{
			// switch used based on board selected by user.

			switch (boardNum)
			{
			case 0:
				displayBoard(board1);
				break;
			case 1:
				displayBoard(board2);
				break;
			case 2:
				displayBoard(board3);
				break;
			}

			cout << "Enter Guess or 0 to Exit >> ";
			cin >> ans;
			cout << endl;

			while (ans < 0)  // Input Validation.
			{
				cout << "Sorry, you've inputted an invalid number.Guess a number greater than 0, or select 0 to Exit ";
				cin >> ans;
			}

			if (ans == 0)
			{
				cout << "Thank you for playing the Missing Number Game! ";
				return 0;
			}

			// Test to determine if all boards are winners and congratulate winner.

			winner = testWinner(ans, boardNum, ansArray);
			{
				if (winner)
				{
					numberWins += 1;
					usedBoards[boardNum] = 1;

					if (numberWins == 3)
					{
						cout << "*** You are the number guessing champion!! CONGRATULATIONS!! *** " << endl;
						return 0;
					}
					cout << endl;
					cout << "Do you wish to play Again? Enter 0 to Exit, or any number to continue...>>";
					cin >> ans;

					if (ans == 0)
					{
						cout << "Thank you for playing, have a nice day";
						return 0;
					}
				}
				else
				{
					numberGuesses += 1;
				}
			}

			// User asked to play 3 times and selects board not replayed after 1st selection.

		} while (winner != true && numberGuesses < 3);

		if (numberGuesses == 3)
		{
			cout << "Sorry... You are out of Guesses..." << endl;
			cout << "Do you wish to play again? Enter 0 to Exit or any number to continue... >>" << endl;
			cin >> ans;

			if (ans == 0)
			{
				cout << "Thank you for playing the Missing Number Game! ";
				return 0;
			}
		}
	} while (numberWins < 3);

}

// Function prototype displays user instructions.

void instructions()
{
	cout << " ****************************************************************** " << endl;
	cout << "                          MISSING NUMBERS GAME                      " << endl;
	cout << "                           A fun brain game....                     " << endl;
	cout << "                                                                    " << endl;
	cout << "     Please Enter a whole number to guess the missing number...     " << endl;
	cout << "                Program Developed by : Dom Sanchez                  " << endl;
	cout << " ****************************************************************** " << endl;
}

//  Function prototype tracks which boards have been played and generates a random board number between 1 and 3.

int beginGame(int playedBoard[])
{
	int randomNum;
	srand(time(0));

	do
	{
		randomNum = (rand() % (2 - 0 + 1)) + 0;
		if (playedBoard[randomNum] == 0)
			return randomNum;
	} while (playedBoard[randomNum] != 0);
}

// Function prototype displays board with rows and columns.

void displayBoard(int board[][3])
{

	int row = 4;
	int col = 3;

	for (int x = 0; x < row; x++)
	{
		for (int y = 0; y < col; y++)
		{
			if (board[x][y] == 0)
				cout << setw(8) << "?";
			else
				cout << setw(8) << board[x][y];
		}
		cout << endl;
	}
}

// Function protoype used to test if user answer.

bool testWinner(int ans, int boardNum, int ansBoard[])
{

	if (ans == ansBoard[boardNum])
	{
		cout << "You are a number genius!!" << endl;
		return true;
	}
	else
	{
		cout << "I am sorry that was incorrect..." << endl;
		return false;
	}
}