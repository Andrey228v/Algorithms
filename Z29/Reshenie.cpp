#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;


int find_short_path(vector<int>& A, int start_position, vector<int>& cashe);

int main() {

	int N;
	int E;
	long long result = 0;

	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> N;
	vector<int> arr_temp(N);
	vector<int> cashe(N, -1);
	cashe[N - 1] = 0;

	for (int i = 0; i < N; i++) {
		in >> arr_temp[i];
	}

	cashe[N - 2] = abs(arr_temp[N - 1] - arr_temp[N - 2]);

	result = find_short_path(arr_temp, 0, cashe);
	out << result;

	return 0;
}

int find_short_path(vector<int>& A, int start_position, vector<int>& cashe) {

	long long result = 0;

	if (cashe[start_position] != -1) {
		return cashe[start_position];
	}

	int Path_R1 = abs(A[start_position] - A[start_position + 1]) + find_short_path(A, start_position + 1, cashe);
	int Path_R2 = 3*abs(A[start_position] - A[start_position + 2]) + find_short_path(A, start_position + 2, cashe);

	if (Path_R1 < Path_R2) {
		cashe[start_position] = Path_R1;
		return cashe[start_position];
	}
	else {
		cashe[start_position] = Path_R2;
		return cashe[start_position];
	}
}

