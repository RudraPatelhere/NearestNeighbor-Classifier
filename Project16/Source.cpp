// PROG71030 - Final Project
// Rudra Patel

#include"AnotherClassifier.h"
#include"NNClassifier.h"
#include"Data.h"
#include"Classifier.h"
#include<iostream>

using namespace std;

int main()
{
	NNClassifier classifier;

	cout << "Select the below given options:" << endl;
	cout << "1] Read the datas from testing file" << endl;
	cout << "2] Read data from unknown file" << endl;
	cout << "3] Manually enter a single coordinate" << endl;

	do
	{
		int Chances = 0;
		cin >> Chances;
		switch (Chances)
		{
		case 1:
		{
			classifier.testing();
			return 0;

		}
		case 2:
		{
			classifier.classify();
			return 0;
		}
		case 3:
		{
			string x, y, z;
			cout << "Enter the value of x plese: " << endl;
			cin >> x;

			cout << "Enter the value of y plese:" << endl;
			cin >> y;

			cout << "Enter the value of z plese:" << endl;
			cin >> z;

			classifier.classify(stod(x), stod(y), stod(z));
			return 0;
		}
		default:
			system("cls");
		}
	} while (true);

	return 0;
}