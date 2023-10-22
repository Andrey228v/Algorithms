#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Print_vector(vector<int>& vec);

int main() {

	int N = 100;
	int M = 200;
	int K = 300;

	



	vector<int> A{ 1, 2, 3 };
	Print_vector(A);
	
	vector<int> B{ 4,5 };
	Print_vector(B);

	vector<int>* C;


	B = A; 
	Print_vector(B);
	B[0] = 100;
	Print_vector(A);
	Print_vector(B);

	cout << &A << " " << &C << endl;
	C = &A;

	

	return 0;
}

void Print_vector(vector<int>& vec) {
	string result = "";

	for (int i = 0; i < vec.size(); i++) {
		result += to_string(vec[i]) + " ";
	}

	cout << result << endl;
}




