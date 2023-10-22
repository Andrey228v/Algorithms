#include <iostream>
#include <fstream>


using namespace std;

long long factorial(int N, long long *result);

int main() {

	int N;
	long long result = 1;

	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> N;





	result =  factorial(N, &result);


	cout << result << endl;
	out << result;
	return 0;
}

long long factorial(int N, long long *result) {

	cout << N << " " << *result << endl;

	for (int i = 1; i <= N; i++) {
		*result *= i;
	}

	return *result;
}

