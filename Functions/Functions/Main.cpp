#include <iostream>

int Multiply_Par(int a, int b)
{
	return a * b;
}

int Multiply()
{
	return 8 * 6;
}

void MultiplyResult(int a, int b)
{
	int result = Multiply_Par(a, b); 
	std::cout << result << std::endl;
}

int main()
{
	MultiplyResult(98, 52);
	MultiplyResult(32, 9);
	MultiplyResult(42, 21);
	MultiplyResult(9, 2);
	MultiplyResult(3, 21);

	std::cin.get();
}