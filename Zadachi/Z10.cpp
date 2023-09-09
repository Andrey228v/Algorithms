#include <iostream>
#include <set>
#include <fstream>


int main() {

	long long A, B, C, D, result;
	std::ofstream out("output.txt"); // поток для записи
	
	std::cin >> A >> B >> C >> D;
	//A = 32768;
	//B = 32768;
	//C = 32768;
	//D = 32768;
	
	std::set<int> s;

	for (int x = -100; x <= 100; x++) {
		result = A*x*x*x + B*x*x + C*x + D;

		if (result == 0){
			s.insert(x);
		}
	};

	for (auto elem : s) {
		std::cout << elem << std::endl;
		out << elem << " ";
	}

	out.close();
	
	return 0;
}
