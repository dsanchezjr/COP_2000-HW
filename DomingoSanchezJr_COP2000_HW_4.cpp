//Home work-4 (M4y2)
//COP 2000 C120 06:35pm
//by Domingo Sanchez Jr.
//Nov., 3. 2018

//The program is to request the user to input threee racing times results and the racer's first name.
//The program is to determine which race had the fastest time (the winner) and also determine.
//if there is a tie and output the name of the winner along with their time and/or tied individuals.
//In addtion, the program is to also output the average race time.



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function prototypes.
void welcome();
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
double raceAverage(double, double, double);

int main()
{
	double average; //average initializer
	double time_1;  //time of racer 1
	double time_2;  //time of racer 2
	double time_3;  //time of racer 3
	string racer_1; //name of racer 1
	string racer_2; //name of racer 2
	string racer_3; //name of racer 3
	welcome();
	getRaceTimes(racer_1, time_1);
	cout << endl;
	getRaceTimes(racer_2, time_2);
	cout << endl;
	getRaceTimes(racer_3, time_3);
	cout << endl;
	findWinner(racer_1, racer_2, racer_3, time_1, time_2, time_3);
	cout << endl;
	cout << endl;
	double result = raceAverage(time_1, time_2, time_3);
	cout << setprecision(3) << "The overall race time average is " << " " << result;

	return 0;
}

// retrieve race names and times prototype.

void getRaceTimes(string &racer_Name, double &race_Time)
{
	cout << "Please enter the racer's first name of the racer > " << endl;
	cin >> racer_Name;
	cout << "Please enter the racer's time > " << endl;
	cin >> race_Time;
	while (race_Time <= 0)
	{
		cout << "Sorry, you've inputted an invalid time. Please enter a valid race time > ";
		cin >> race_Time;
	}
	return;
}

// find winners and display name(s) and time(s) prototype.

void findWinner(string racer_1, string racer_2, string racer_3, double time_1, double time_2, double time_3)
{
	if ((time_1 < time_2) && (time_1 < time_3))
	{
		cout << "Congratulations" << " " << racer_1 << "!! " << "you are the winner!" << endl;
		cout << "***** Your winning time is: " << time_1 << " *****" << endl;
	}
	if ((time_2 < time_1) && (time_2 < time_3))
	{
		cout << "Congratulations" << " " << racer_2 << "!! " << "you are the winner!" << endl;
		cout << "***** Your winning time is: " << time_2 << " ***** " << endl;
	}
	if ((time_3 < time_1) && (time_3 < time_2))
	{
		cout << "Congratulations" << " " << racer_3 << "!! " << "you are the winner!" << endl;
		cout << "***** Your winning time is: " << time_3 << " *****" << endl;
	}
	if ((time_2 < time_1) && (time_2 == time_3))
	{
		cout << "We have a TIE" << " " << racer_2 << " " << "and" << " " << racer_3 << " " << "  win!!" << endl;
		cout << "***** Your winning time is: " << time_2 << " *****" << endl;
	}
	if ((time_3 < time_2) && (time_3 == time_1))
	{
		cout << "We have a TIE" << " " << racer_1 << " " << "and" << " " << racer_3 << " " << " win!! " << endl;
		cout << "***** Your winning time is: " << time_3 << " *****" << endl;
	}
	if ((time_2 < time_3) && (time_2 == time_1))
	{
		cout << "We have a TIE" << " " << racer_1 << " " << "and" << " " << racer_2 << " " << " win!!" << endl;
		cout << "***** Your winning time is: " << time_1 << " *****" << endl;
	}
	if ((time_1 == time_2) && (time_1 == time_3))
	{
		cout << "We have a 3 way TIE!!! There is no winner for this Race..." << endl;
	}
	return;
}

//Welcome display and intro prototype.

void welcome()
{
	cout << "************************************************" << endl;;
	cout << "Welcome to the Race Results Program." << endl;
	cout << "You are asked to enter the three racer’s names" << endl;
	cout << "and their associated race times. " << endl;
	cout << endl;
	cout << "Please enter a real number for the race time (the Race Time Must be > 0)." << endl;
	cout << endl;
	cout << "Program Developed by: Dom Sanchez" << endl;;
	cout << "************************************************" << endl;;
	cout << endl;
	return;
}

// return race time average prototype.

double raceAverage(double time_1, double time_2, double time_3)
{
	double average = 0;
	average = (time_1 + time_2 + time_3) / 3;
	return average;
}