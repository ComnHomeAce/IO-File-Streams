// IO File Streams.cpp

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	//Declate input
	ifstream input;

	//Open input
	input.open("C:\\Users\\cjmccart\\Desktop\\Grades.txt");

	//Test input
	if (input.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	//Declare input variables
	string firstName;
	string lastName;
	double score1, score2, score3, score4, scoreAvg;

	//Declate output
	ofstream output;

	//Create File
	output.open("C:\\Users\\cjmccart\\Desktop\\CalculatedGrades.txt");

	//Print heading
	cout << "============================ Input data with average score ============================" << endl;
	cout << setw(15) << "First Name" << setw(15) << "Last Name" << setw(10) << "Score1"
		 << setw(7) << "Score2" << setw(7) << "Score3" << setw(7) << "Score4" << endl;
	cout << endl;

	while (!input.eof())
	{
		//Read input and assign to variables
		input >> firstName >> lastName >> score1 >> score2 >> score3 >> score4;
	
		//Calculate average score
		scoreAvg = (score1 + score2 + score3 + score4) / 4;

		//Print input data
		cout << setw(15) << firstName << setw(15) << lastName << setw(10) << score1 << setw(7) << score2 << setw(7) << score3 << setw(7)
			<< score4 << "   Average Score = " << setw(7) << scoreAvg << endl;

		//Write output file
		output << setw(15) << firstName << setw(15) << lastName << setw(10) << score1 << setw(7) << score2 << setw(7) << score3 << setw(7)
			<< score4 << "   Average Score = " << setw(7) << scoreAvg << endl;
	}

	//Close input file with message
	input.close();
	cout << endl;
	cout << "File read complete" << endl;

	//Close output file with message
	output.close();
	cout << endl;
	cout << "File creation complete" << endl;

	return 0;
}