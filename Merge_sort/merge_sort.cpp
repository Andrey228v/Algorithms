#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

void Print_vector(vector<int>& A);

vector<int> merge_sort(vector<int>& A);

vector<int> merge_vv(vector<int>& A, vector<int>& B);


int main() {

	vector<int> A{ 4, 1, 5, 10, 2, 3, 3, 4, 1, 0 };
	Print_vector(A);

	merge_sort(A);
	Print_vector(A);



	return 0;
}



vector<int> merge_sort(vector<int>& A) {

	int N = A.size();

	vector<int> left;
	vector<int> right;
	

	if (N == 1) {
		return A;
	}


	for (int i = 0; i < N / 2; i++) {
		left.push_back(A[i]);
	}

	for (int i = N / 2; i < N; i++) {
		right.push_back(A[i]);
	}


	left = merge_sort(left);
	right = merge_sort(right);


	
	A = merge_vv(left, right);
	Print_vector(A);

	return A;
};

vector<int> merge_vv(vector<int>& A, vector<int>& B) {

	vector<int> C;
	int lp = 0;
	int rp = 0;

	//Print_vector(A);
	//Print_vector(B);
	

	while (lp != A.size() || rp != B.size()) {

		if (lp == A.size()) {
			C.push_back(B[rp]);
			rp++;
		}
		else if (rp == B.size()) {
			C.push_back(A[lp]);
			lp++;
		}
		else {
			
			if (A[lp] < B[rp]) {
				C.push_back(A[lp]);
				lp++;
			}
			else {
				C.push_back(B[rp]);
				rp++;
			}
		}
	};


	return C;
}

void Print_vector(vector<int>& A) {

	string result = "";

	for (int i = 0; i < A.size(); i++) {
		result += to_string(A[i]) + " ";
	}
	
	cout << result << endl;

}