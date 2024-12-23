#pragma once
// PROG71030 - Final Project
// By: Rudra Patel
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<sstream>

using namespace std;

/// <summary>
/// @brief This is the Data class.
/// 
/// @author Rudra Patel
/// @date 13/04/2023
/// </summary>
class DATA
{
	int R;
	double X, Y, Z;
public:
	/// <summary>
	/// @brief This is the default constructor.
	/// 
	/// This constructor creates a Data object.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	DATA();
	/// <summary>
	/// @brief This is the copy constructor constructor.
	/// 
	/// This constructor deep copies another Data object.
	/// @author Rudra Patel
	/// @param Point: A Data object which will be deep copied.
	/// @date 13/04/2023
	/// </summary>
	DATA(DATA&);
	/// <summary>
	/// @brief This is the parameterized constructor.
	/// 
	/// This constructor initializes a Data object with additional information.
	/// @author Rudra Patel
	/// @param X: A double value for the x position.
	/// @param Y: A double value for the y position.
	/// @param Z: A double value for the z position.
	/// @param O: A double value for the o position.
	/// @date 13/04/2023
	/// </summary>
	DATA(double X, double Y, double Z, int r);
	/// <summary>
	/// @brief This is the getX function.
	/// 
	/// This function returns the x value from the current object.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns a double, for the x value.
	/// </summary>
	double Getting_X(void);
	/// <summary>
	/// @brief This is the getY function.
	/// 
	/// This function returns the y value from the current object.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns a double, for the y value.
	/// </summary>
	double Gettting_Y(void);
	/// <summary>
	/// @brief This is the getZ function.
	/// 
	/// This function returns the z value from the current object.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns a double, for the z value.
	/// </summary>
	double Getting_Z(void);
	/// <summary>
	/// @brief This is the getO function.
	/// 
	/// This function returns the o value from the current object.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns an integer, for the R value.
	/// </summary>
	int Getting_R(void);
	/// <summary>
	/// @brief This is the setX function.
	/// 
	/// This function sets the x value from the current object.
	/// @param This function takes a double, for the new x value.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	void Setting_X(double X);
	/// <summary>
	/// @brief This is the setY function.
	/// 
	/// This function sets the y value from the current object.
	/// @param This function takes a double, for the new y value.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	void Setting_Y(double Y);
	/// <summary>
	/// @brief This is the setZ function.
	/// 
	/// This function sets the Z value from the current object.
	/// @param This function takes a double, for the new z value.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	void Different_Classifier(double Z);
	/// <summary>
	/// @brief This is the setO function.
	/// 
	/// This function sets the R value from the current object.
	/// @param This function takes a double, for the new o value.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	void Setting_R(int R);
	/// <summary>
	/// @brief This is the getDistanceFrom function.
	/// 
	/// This function sets returns the distance from the current Data to another Data.
	/// @param This function takes in a Data object as a parameter.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns a double, for the distance.
	/// </summary>
	double Get_The_Distance_Form(DATA);
	/// <summary>
	/// @brief This is the getOrientation function.
	/// 
	/// This function sets returns the orientation label from a Data object.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns a string, for the orientation.
	/// </summary>
	string Orientation_Get();
	/// <summary>
	/// @brief This is the assignment operator for =.
	/// 
	/// This function is the assignment operator for the Data class.
	/// @param Point: A Data object
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// @return This function returns a Data object.
	/// </summary>
	DATA operator = (DATA);
};