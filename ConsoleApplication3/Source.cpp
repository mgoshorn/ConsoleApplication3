#include <iostream>

int main()
{
	std::cout << "Enter a size for your triangle.\n";
	int tri;
	std::cin >> tri;
	std::cout << "Creating a triangle of size: " << tri << "\n";

	for (int i = 0; i < tri; i++) {
		for (int l = 0; l < tri; l++) {
			if (l < i)	{ std::cout << " "; }
			else		{ std::cout << "*"; }
		}
	std::cout << "\n";
	}
}