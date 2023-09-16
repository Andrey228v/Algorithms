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

	for (int i = 0; i < N; i++) {
		std::cout << "sort:" << arr_temp[i] << std::endl;
	}


	result = find_short_line(arr_temp);
	std::cout << "\nresult:" << result << std::endl;
	out << result;

	return 0;
}

int find_short_line(std::vector<int> &A) {

	long long result = 0;
	
	std::cout << "A.size() - 2: " << A.size() - 2 << " A size() - 1: " << A[A.size() - 1] << std::endl;

	for (int i = 0; i <= A.size() - 1; i++)
	{	
		if (i == 0) 
		{
			std::cout << "in: " << i << " A[i]:" << A[i] << std::endl;
			result += A[i + 1] - A[0];
			i = i + 1;
		}
		else if (0 < i && i < (A.size() - 1)) 
		{
			std::cout << "i: " << i << " A[i]:" << A[i] << std::endl;
			if (A[i] - A[i - 1] < A[i + 1] - A[i]) 
			{
				result += A[i] - A[i - 1];
			}
			else 
			{
				result += A[i + 1] - A[i];

				if (i < A.size() - 2) {
					i = i + 1;
					std::cout << "Zahod" << " i: " << i <<  std::endl;
					
					if (i + 1 == A.size() - 2) {
						result += A[A.size() - 1] - A[A.size() - 2];
						return result;
					}
				
				}
			}
		}
		else if (i >= (A.size() - 1))
		{
			std::cout << "iL: " << i << " A[i]:" << A[i] << std::endl;
			result += A[A.size() - 1] - A[A.size() - 2];
		}		
	}

	return result;
}
