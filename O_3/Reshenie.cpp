#include <iostream>
#include <fstream>
#include <vector>
#include <string>;

using namespace std;

void count_sort(std::vector<int> &A);
void Print_vector(vector<int> &A);


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

	Print_vector(arr_temp);
	count_sort(arr_temp);
	cout << "" << endl;
	Print_vector(arr_temp);

	for (int elem : arr_temp) {
		out << elem << " ";
	}
	return 0;
}

void Print_vector(vector<int> &A) {

	string result;


	for (int i = 0; i < A.size(); i++) {

		result += to_string(i) + ": " + to_string(A[i]) + "\t";
	}

	cout << result << endl;

}


void count_sort(std::vector<int> &A) {

	vector<int> counter(201);

	for (int i = 0; i < A.size(); i++) {
		counter[A[i] + 100] += 1;
	}

	int n = 0;
	for (int x = 0; x <= 200; x++) {
		for (int i = 0; i < counter[x]; i++) {
			A[n] = x-100;
			n += 1;
		}
	}
}
