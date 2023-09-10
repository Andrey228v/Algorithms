#include <iostream>
#include <fstream>

int main() {

	long long A, B, C;
	std::ofstream out("output.txt");

	std::cin >> A >> B;

	C = A + B;
	out << C;
	out.close();

	return 0;
}