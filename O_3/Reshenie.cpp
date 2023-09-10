#include <iostream>
#include <fstream>
#include <vector>

void count_sort(std::vector<int> &A);


int main() {

	long long N;
	int E;
	std::ifstream in("input.txt");
	std::ofstream out("output.txt");

	in >> N;
	std::vector<int> arr_temp(N);
	for (int i = 0; i < N; i++) {
		in >> E;
		arr_temp[i] = E;
	}

	count_sort(arr_temp);

	for (int elem : arr_temp) {
		std::cout << elem << std::endl;
		out << elem << " ";
	}


	return 0;
}

void count_sort(std::vector<int> &A) {

	std::vector<int> counter(200);

	for (int i = 0; i < A.size(); i++) {
		std::cout << A[i] << std::endl;
		counter[A[i] + 100] += 1;
	}

	int n = 0;
	for (int x = 0; x < 200; x++) {
		for (int i = 0; i < counter[x]; i++) {
			A[n] = x-100;
			n += 1;
		}
	}
}
