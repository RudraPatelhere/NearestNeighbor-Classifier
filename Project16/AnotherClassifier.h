#pragma once
// PROG71030 - Final Project
// By:Rudra Patel

#include"Classifier.h"
#include"Data.h"

using namespace std;

/// <summary>
/// @brief This is the AnotherClassifier class. It inherits from the Classifier class.
/// 
/// @author Rudra Patel
/// @date 13/04/2023
/// </summary>
class AnotherClassifer :public Classifier 
{

public:
	/// <summary>
	/// @brief This is the testing function. It overrides the inherited testing function.
	/// 
	/// This testing function overrides the inherited function. It prints a message to the user.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	void testing();
	/// <summary>
	/// @brief This is the classify function. It overrides the inherited classify function.
	/// 
	/// This classify function overrides the inherited function. It prints a message to the user.
	/// @author Rudra Patel
	/// @date 13/04/2023
	/// </summary>
	void classify();
};