#pragma once
// PROG71030 - Final Project
// By: Rudra Patel

#include"Data.h"
#pragma once

using namespace std;

/// <summary>
/// @brief This is a Classifier class. It is an abstract class.
/// 
/// @author Rudra Patel
/// @date 13/04/2023
/// </summary>
class Classifier
{
	/// <summary>
	/// @brief This is a testing function.
	/// 
	/// This testing function is an abstract function.
	/// @author Rudra Patel
	/// @date 06/04/2023
	/// </summary>
	virtual void testing() = 0;
	/// <summary>
	/// @brief This is a classify function.
	/// 
	/// This classify function is an abstract function.
	/// @author Rudra Patel
	/// @date 06
	/// /04/2023
	/// </summary>
	virtual void classify() = 0;
};