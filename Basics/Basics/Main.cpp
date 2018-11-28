#include <iostream>
#include "Log.h"
#include "Variables.h"
#include "Functions.h"

#define Print(x) std::cout << x << std::endl;

int main()
{

#pragma region Variables

	//Print(var << "\n" << uvar << "\n" << character << "\n" << sNum << "\n" << fNum << "\n" << dNum << "\n" << isTrue);
	//var = 20;
	//Print(var);
	//
	//Print(sizeof(var) << "\n" << sizeof(uvar) << "\n" << sizeof(character) << 
	//	"\n" << sizeof(sNum) << "\n" << sizeof(fNum) << "\n" << sizeof(dNum) << 
	//	"\n" << sizeof(isTrue));

#pragma endregion

#pragma region Functions

	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(40, 95);
	
#pragma endregion

#pragma region If Statements

	//	const char* ptr = nullptr;
	//	if (ptr)
	//		Log(ptr);
	//	else
	//		Log("PTR IS NULL");
	//
	//	int x = 5;
	//	bool comparisonResult = x == 5;
	//
	//	if (comparisonResult)
	//	{
	//		Log("Hello World");
	//	}

#pragma endregion

	std::cin.get();
}