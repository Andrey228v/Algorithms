#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


int find_short_line(std::vector<int> &A);

int main() {

	int N;
	int E;
	long long result = 0;

	std::ifstream in("input.txt");
	std::ofstream out("output.txt");

	in >> N;
	std::vector<int> arr_temp(N);
	for (int i = 0; i < N; i++) {
		in >> E;
		arr_temp[i] = E;
	}

	std::sort(begin(arr_temp), end(arr_temp));

	result = find_short_line(arr_temp);
	std::cout << "result:" << result << std::endl;
	out << result;

	return 0;
}

int find_short_line(std::vector<int> &A) {

	long long result = 0;

	for (int i = 1; i < A.size() - 1; i++) {

		if ((A[i] - A[i - 1]) < (A[i + 1] - A[i])) {

			result += A[i] - A[i - 1];
		}
		else {
			result += A[i + 1] - A[i];
		}
	}

	return result;
}
