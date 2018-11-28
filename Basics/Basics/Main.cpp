#include <iostream>
#include "Log.h"
#include "Variables.h"

int main()
{
	const char* ptr = nullptr;
	if (ptr)
		Log(ptr);
	else
		Log("PTR IS NULL");

	int x = 5;
	bool comparisonResult = x == 5;

	if (comparisonResult)
	{
		Log("Hello World");
	}
	std::cin.get();
}