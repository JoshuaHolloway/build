#include <iostream>
auto main() -> int
{
	int* x = new int[2];
	x[0] = 1;
	x[1] = 2;

	std::cout << "Hello!\n";
	return(0);
}