#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	long long N;
	int E;
	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> N;
	vector<int> arr_temp(N);
	for (int i = 0; i < N; i++) {
		in >> E;
		arr_temp[i] = E;
	}


	for (int elem : arr_temp) {
		cout << elem << endl;
		out << elem << " ";
	}

	return 0;
}