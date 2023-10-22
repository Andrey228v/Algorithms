#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Print_vector(vector<int>& A);

string Binary_Search(vector<int>& A, int value);

int Upper_bound(vector<int>& A, int value);

int main() {


	vector<int> A{5, 10, 10, 10, 15, 17, 21, 23, 23, 23, 25, 27, 30};
	vector<int> m{ 5, 10, 22 };
	string position_elem;

	Print_vector(A);
	Print_vector(m);

	for (int i = 0; i < m.size(); i++) {

		position_elem = Binary_Search(A, m[i]);
		cout << position_elem << endl;
	}


	return 0;
}


int Upper_bound(vector<int>& A, int value) {

	int result = -1;




	return result;
}


string Binary_Search(vector<int>& A, int value) {

	string result;
	int lp = -1;
	int rp = A.size();
	int mp;

	while (lp < rp - 1) {

		mp = (lp + rp) / 2;
		if (A[mp] < value) {
			lp = mp;
		}
		else {
			rp = mp;
		} 
	}


	if (mp > A.size()) {

		result = to_string(-1) + " " + "-1";
	}
	else if (mp < 0) {
		result = to_string(-1) + " " + "-1";

	}
	else if (A[mp] != value) {
		result = to_string(-1) + " " + "-1";
	}
	else {
		result = to_string(rp);
		int double_elem = -1;

		rp++;
		while (A[rp] == value) {
			double_elem = rp;
			rp++;
		}

		result += " " + to_string(double_elem);
	}

	return result;
}


void Print_vector(vector<int>& A) {

	string result;


	for (int i = 0; i < A.size(); i++) {

		result += to_string(i) + ": " + to_string(A[i]) + "\t";
	}

	cout << result << endl;

}

