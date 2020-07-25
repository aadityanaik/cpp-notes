#include <iostream>

#define PIE     3.14                    // You can now use PIE in place of 3.14 wherever the definition applies

#define SQR(a)  ((a) * (a))             // You can now use SQR to find the square of a number a

int main() {
	int radius = 3;
	double buggy_area = PIE * SQR(++radius);

	std::cout << "The area of a circle with radius " << radius
	          << " is " << buggy_area;

	return 0;
}
