#include"Data.h"

DATA::DATA()
{
	this->X = 0;
	this->Y = 0;
	this->Z = 0;
	this->R = 0;
}

DATA::DATA(double X, double Y, double Z, int R)
{
	this->X = X;
	this->Y = Y;
	this->Z = Z;
	this->R = R;
}

DATA::DATA(DATA& point) {
	this->X = point.X;
	this->Y = point.Y;
	this->Z = point.Z;
	this->R = point.R;
}

double DATA::Getting_X(void) {
	return X;
}

double DATA::Gettting_Y(void) {
	return Y;
}

double DATA::Getting_Z(void) {
	return Z;
}

int DATA::Getting_R(void) {
	return R;
}

void DATA::Setting_X(double X) {
	this->X = X;
}

void DATA::Setting_Y(double Y) {
	this->Y = Y;
}

void DATA::Different_Classifier(double Z) {
	this->Z = Z;
}

void DATA::Setting_R(int R) {
	this->R = R;
}

string DATA::Orientation_Get()
{
	if (this->R == 1) {
		return "Face Up";
		cout << "FACE UP";
	}
	else if (this->R == 2)
		return "Face Down";
	else if (this->R == 3)
		return "Portrait";
	else if (this->R == 4)
		return "Portrait Upside Down";
	else if (this->R == 5)
		return "Landscape Left";
	else if (this->R == 6)
		return "Landscape Right";
}

double DATA::Get_The_Distance_Form(DATA point)
{
	double db = sqrt(pow((point.Getting_X() - this->X), 2) + pow((point.Gettting_Y() - this->Y), 2) + pow((point.Getting_Z() - this->Z), 2));
	return db;
}

DATA DATA::operator = (DATA point)
{
	if (this != &point)
	{
		this->X = point.X;
		this->Y = point.Y;
		this->Z = point.Z;
		this->R = point.R;
	}

	return *this;
}