#include <iostream>

int main()
{
	/*unsigned*/
	//char = 1byte, short = 2bytes, int = 4bytes, long = 4bytes, long long = 8bytes
	
	/*decimal*/
	// float = 4bytes, double = 8bytes

	//bool = 1byte -> because we can address at least 1byte

	/*bool isIt = true;

	float vardec = 5.32f;
	double vardou = 5.8;

	char a = 'A';
	a = 65; // A

	std::cout << a << std::endl;

	int var = 2147483647; // 4 bytes = -2b -> 2b(signed)
	std::cout << var << std::endl;
	
	// changing var
	var = -2147483647; 
	std::cout << var << std::endl;
	
	unsigned int var1 = 4294967295; //non negative
	std::cout << var1 << std::endl;*/

	std::cout << "size of bool: " << sizeof(bool) << " bytes" << std::endl;
	std::cout << "size of char: " << sizeof(char) << " bytes" << std::endl;
	std::cout << "size of short: " << sizeof(short) << " bytes" << std::endl;
	std::cout << "size of int: " << sizeof(int) << " bytes" << std::endl;
	std::cout << "size of long: " << sizeof(long) << " bytes" << std::endl;
	std::cout << "size of long long: " << sizeof(long long) << " bytes" << std::endl;
	std::cout << "size of float: " << sizeof(float) << " bytes" << std::endl;
	std::cout << "size of double: " << sizeof(double) << " bytes" << std::endl;
	std::cin.get();
}