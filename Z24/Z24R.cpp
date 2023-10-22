#include <iostream>
#include <fstream>

using namespace std;

int reshenie(int N, int M);


int main() {

	int N, M;
	long long result = 0;

	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> N >> M;

	cout << N << " " << M << endl;


	//if (N == 1) {
	//	result = 1;
	//}
	//else {
	//}

	if (N == M) {
		result = 1;
	}
	else if (M == 1) {
		result = N;
	}
	else if (M == 0) {
		result = 1;
	}
	else if (N == 0) {
		result = 0;
	}
	else {
		result = reshenie(N, M);
	}

	cout << result << endl;
	out << result;

	return 0;
}

int reshenie(int N, int M) {

	int result = 0;
	int probor = 0;


	int max_probor = (N - M) / (M - 1);

	while (probor <= max_probor) {

		result += (N - (M + (M - 1)*probor)) + 1;
		probor += 1;
	}


	return result;
}
