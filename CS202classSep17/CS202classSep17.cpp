// CS202classSep17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::istringstream;
using std::ofstream;
using std::ifstream;


int main()
{
	std::cout << "HI Like Pie!\n";

	int total = 0;
	bool boingBoing = true;


	while (boingBoing)
	{
		int x;
		cout << "NUMBERS!: (drop that sucker negative to quit)";
		string userInput;
		getline(cin, userInput);
		istringstream uin(userInput);
		while (true)
		{
			uin >> x;
			if (!uin)
			{
				if (uin.eof())
				{
					break;
				}
				cout << "Bad User, No Cookie! \n";
				uin.clear();
				uin.ignore(999, '\n');
				continue;
			}
			if (x < 0)
			{
				boingBoing = false;
				break;
			}
			total += x;
		}
		cout << "Your total was " << total << "\n";
	}
	ofstream ofile("Repository of Pie.txt", std::ios::app);
	ofile << total << "<- number of pies.\n";
	ifstream f("Repository of Pie.txt");

	if (f.is_open())
		std::cout << f.rdbuf();
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
