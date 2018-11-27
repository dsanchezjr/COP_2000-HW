
#include <iostream>  
#include <iomanip>  
using namespace std;

int main()

{
	//Home work-1 (M1A2)
	//COP 2000 C120 06:35pm
	//by Domingo Sanchez Jr.
	//Sept.,9 2018
	
	
	//Malachi's Pie Shop wishes to have a program that calculates the ingredients for the number of pies a  
	//user wishes to make.  The current recipe calls for the ingredients to make 6 pies:
	//Which are the following:
	//15 cups of all-purpose flour
	//8 tablespoons of sugar
	//3 tablespoons of salt
	//5.25 cups of butter
	//6 large eggs
	
	//The new recipe will calculate the ingredients for any number of pies inputted by the user. 
	//The new recipe will be based off ingredients for one pie listed in constants; which were
	//the ingerdeints of the original recipe divided by 6 (pies).


	//constants for all ingredients needed to make 1 pie.  

	const float flour1 = 2.5;     //cups of all-purpose flour for 1 pie  
	const float sugar1 = 1.33;     //tablespoons of sugar for 1 pie  
	const float salt1 = 0.5;         //tablespoons of salt for 1 pie  
	const float butter1 = 0.875;      //cups of butter for 1 pie  
	const float eggs1 = 1;              //large eggs for 1 pie  


	//New pie recipe variables.  
	float total_pies;

	//Display numer of pies user inputs.  
	cout << "How many pies do you wish to make? ";
	cin >> total_pies;
	cout << "\nMalachi's Pie Shop - Pie Crust Recipe"<< endl;
	cout << "--------------------------------------" << endl;
	cout << setprecision(4) << setw(4) << "You wish to make " << total_pies << " pies." << endl;


	//Display new recipe.  
	cout << "\nFlour   "<< setprecision(3) << setw(4) << left << flour1 * total_pies << "   cups      " << endl;      //Cups of all-purpose flour for new recipe.
	cout << "Sugar   " << setprecision(3) << setw(4) << left << sugar1 * total_pies << "   tablespoons   " << endl;   //Tablespoons of sugar for new recipe.
	cout << "Salt    " << setprecision(3) << setw(4) << left << salt1 * total_pies << "   tablespoons   " << endl;    //Tablespoons of salt for new recipe.
	cout << "Butter  " << setprecision(3) << setw(4) << left << butter1 * total_pies << "   cups    " << endl;        //Cups of butter for new recipe.
	cout << "Eggs    " << setprecision(3) << setw(4) << left << eggs1 * total_pies << "   large eggs\n   " << endl;   //number of large eggs for new recipe.


	system("pause");
	return 0;
}