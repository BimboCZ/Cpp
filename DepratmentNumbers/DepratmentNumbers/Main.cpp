#include <iostream>

using std::cout;
using std::endl;

// Department numbers
// - Fire
// - Police
// - Sanitation
// Each assigned a number in the range 1-7
// Fire #, Police #, Sanitation # all different
// Fire # + Police # + Sanitation # = 12
// Police # must be even

// Problem : Write a program to display all valid department number permutations.

bool isValidDeptNumbers(int fireDeptNum, int policeDeptNum, int saniDeptNum)
{
	return (fireDeptNum != policeDeptNum) &&
		(fireDeptNum != saniDeptNum) &&
		(policeDeptNum != saniDeptNum) &&
		(fireDeptNum + policeDeptNum + saniDeptNum == 12) &&
		(policeDeptNum % 2 == 0);

}

int main()
{
	for (int fireDeptNum = 1; fireDeptNum <= 7; fireDeptNum++)
	{
		for (int policeDeptNum = 1; policeDeptNum <= 7; policeDeptNum++)
		{
			for (int saniDeptNumb = 1; saniDeptNumb + 1 <= 7; saniDeptNumb++)
			{
				if (isValidDeptNumbers(fireDeptNum, policeDeptNum, saniDeptNumb)) {
					cout << fireDeptNum << "-" << policeDeptNum << "-" << saniDeptNumb << endl;
				}
			}
		}
	}
	std::cin.get();
}