#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_mass(vector<int> A);
void count_sort_method(vector<int>& A, int k);


int main() {

	const int N = 15;
	int k = 10;


	vector<int> A{ 4, 2, 10, 4, 3, 6, 7, 1, 4, 10, 10 , 2 ,3 ,4 , 5 };
	print_mass(A);

	count_sort_method(A, k);
	print_mass(A);

	
	return 0;
}


void count_sort_method(vector<int>& A, int k) {


	vector<int> C(k+1);
	print_mass(C);


	for (int i = 0; i < A.size(); i++) {
		C[A[i]]++;
	};

	print_mass(C);
	A.clear();

	for (int i = 0; i < C.size(); i++) {
		for (int j = 0; j < C[i]; j++) {
			A.push_back(i);
		}
	}


}



void print_mass(vector<int> A) {
	
	string result = "";

	for (int i = 0; i < A.size(); i++) {
		result += to_string(A[i]) + " ";
	}
	cout << result << endl;
}
