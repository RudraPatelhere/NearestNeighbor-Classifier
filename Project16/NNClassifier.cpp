// PROG71030 - Final Project
// By:Rudra Patel
#pragma once
#include"Data.h"
#include"NNClassifier.h"
#define TRAINING_FILE "trainingData.txt"
#define TESTING_FILE "testingData.txt"
#define UKNOWN_FILE "unknownData.txt"

using namespace std;

NNClassifier::NNClassifier()
{
	ifstream Put_Input;
	Put_Input.open(TRAINING_FILE);
	int i = 0;
	if (Put_Input.is_open())
	{

		while (!Put_Input.eof())
		{

			string LINE;
			getline(Put_Input, LINE);
			istringstream IsLine(LINE);

			string Daimention;


			getline(IsLine, Daimention);
			istringstream IsDimention(Daimention);
			string x;
			string y;
			string z;
			string Orieantation;
			while (!IsDimention.eof())
			{
				getline(IsDimention, x, ',');
				getline(IsDimention, y, ',');
				getline(IsDimention, z, ',');
				getline(IsDimention, Orieantation);

			}
			DATA newPoint(stod(x), stod(y), stod(z), stoi(Orieantation));
			dataPoints[i] = newPoint;
			i++;
		}
	}
	Put_Input.close();
}

void NNClassifier::testing()
{
	ifstream IP;

	IP.open(TESTING_FILE);

	int i = 0;

	if (IP.is_open())

	{
		while (!IP.eof())
		{
			string LINE;
			getline(IP, LINE);
			istringstream issline(LINE);

			string Daimention;
			getline(issline, Daimention);
			istringstream issdimention(Daimention);

			string x;
			string y;
			string z;
			string Orieantation;
			while (!issdimention.eof()) {
				getline(issdimention, x, ',');
				getline(issdimention, y, ',');
				getline(issdimention, z, ',');
				getline(issdimention, Orieantation);

			}
			DATA NEW_POINT(stod(x), stod(y), stod(z), stoi(Orieantation));
			TestThePoint[i] = NEW_POINT;

			i++;
		}

	}
	IP.close();


	for (int j = 0; j < i; j++)
	{
		DATA nearestNeighbor = this->nearestNeighbor(TestThePoint[j]);
		cout << "This testing point's orientation is: " << nearestNeighbor.Orientation_Get() << endl;
	}

	for (int j = 0; j < i; j++)
	{
		DATA NoPoint;
		TestThePoint[i] = NoPoint;
	}
}

void NNClassifier::classify() {
	ifstream input;
	input.open(UKNOWN_FILE);
	int i = 0;
	if (input.is_open())
	{
		while (!input.eof())
		{

			string line;
			getline(input, line);
			istringstream issline(line);

			string IsDimention;
			getline(issline, IsDimention);
			istringstream issdimention(IsDimention);

			string x;
			string y;
			string z;

			while (!issdimention.eof()) {
				getline(issdimention, x, ',');
				getline(issdimention, y, ',');
				getline(issdimention, z);
			}

			DATA newPoint(stod(x), stod(y), stod(z), 0);
			TestThePoint[i] = newPoint;

			i++;
		}
		input.close();

		//Find nearest neighbor and set orientation
		for (int j = 0; j < i; j++)
		{
			DATA nearestNeighbor = this->nearestNeighbor(TestThePoint[j]);
			TestThePoint[j].Setting_R(nearestNeighbor.Getting_R());
		}

		cout << "Orientations have been added to the unknown data file." << endl;
	}

	ofstream output;
	output.open(UKNOWN_FILE);
	if (output.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			output << TestThePoint[j].Getting_X() << "," << TestThePoint[j].Gettting_Y() << "," << TestThePoint[j].Getting_Z() << "," << TestThePoint[j].Getting_R() << endl;
		}

		output.close();
	}
	else
		cout << "Sorry an error opening unknown data file" << endl;
}

void NNClassifier::classify(double x, double y, double z)
{
	DATA point(x, y, z, 0);
	DATA nearestNeighbor;
	nearestNeighbor = this->nearestNeighbor(point);
	point.Setting_R(nearestNeighbor.Getting_R());
	cout << "That point has the orientation: " << point.Getting_R() << endl;
}

DATA& NNClassifier::nearestNeighbor(DATA point)
{
	DATA nearestNeighbor = dataPoints[0];

	for (int c = 1; c < ARRAY_SIZE; c++)
	{
		if (point.Get_The_Distance_Form(dataPoints[c]) < point.Get_The_Distance_Form(nearestNeighbor))
			nearestNeighbor = dataPoints[c];
	}

	return nearestNeighbor;
}