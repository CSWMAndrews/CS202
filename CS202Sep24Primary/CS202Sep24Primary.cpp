// CS202sep24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>



int main()
{
	//std::cout << "Hello World!\n";
	//std::ofstream ofile("output.txt");

	//for (int i = 0; i < 100; i++)
		//ofile << std::setw(6) << i * i;

	//std::ofstream ofile("output2.txt" , std::ios::binary);

	//for (int i = 0; i < 100; i++)
		//ofile.write(reinterpret_cast<const char*>(&i), sizeof(i));

	std::ifstream ifile("data.dat", std::ios::in | std::ios::binary);


	int totalSum = 0;
	double totalAv = 0;

	while (true)
	{
		int x;
		ifile.read(reinterpret_cast<char*>(&x), sizeof(int));
		//std::cout << x << "\n" << ifile.tellg() << "\n";
		totalSum = totalSum + x;

		if (!ifile.eof())
			totalAv = ifile.tellg();

		if (ifile.eof())
			break;
	}
	
	std::cout << "Number of numbers: " << totalAv / 4 << "\n";
	std::cout << "Sum of all numbers: " << totalSum << "\n";
	totalAv = totalSum / (totalAv/4);
	std::cout << "Average of all numbers : " << totalAv << "\n";


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
