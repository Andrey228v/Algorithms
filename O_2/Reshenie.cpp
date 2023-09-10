#include <iostream>
#include <fstream>


int main() {

	long long i, N, result;
	result = 0;
	std::ofstream out ("output.txt");
	std::cin >> N;

	for (i = 0; i <= N; i++) {
		result += i;
	}

	out << result;
	out.close();
	return 0;
}