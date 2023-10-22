#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


int find_short_line(std::vector<int> &A, int start_position, std::vector<int> &cashe);

int main() {

	int N;
	int E;
	long long result = 0;

	std::ifstream in("input.txt");
	std::ofstream out("output.txt");

	in >> N;
	std::vector<int> arr_temp(N);
	std::vector<int> cashe(N);
	


	for (int i = 0; i < N; i++) {
		in >> E;
		arr_temp[i] = E;
	
	}

	std::sort(begin(arr_temp), end(arr_temp));

	for (int i = 0; i < N; i++) {
		std::cout << "sort:" << arr_temp[i] << std::endl;
	}


	result = find_short_line(arr_temp, N-1, cashe);
	std::cout << "\nresult:" << result << std::endl;
	out << result;

	return 0;
}

int find_short_line(std::vector<int> &A, int start_position, std::vector<int> &cashe) {

	long long result = 0;
	
	std::cout << "A.size() - 2: " << A.size() - 2 << " A size() - 1: " << A[A.size() - 1] << std::endl;

	for (int i = start_position; i < A.size(); i++)
	{	
		
		find_short_line(A, start_position, cashe);

	}

	return result;
}
