#include <iostream>
#include <vector>
#include <string>

using namespace std;


void print_vector(vector<int>& A);
int get_min(vector<int>& A);
void insert(vector<int>& A, int x);
void sift_up(vector<int>& A, int pos);
void delet(vector<int>& A, int pos);
void sift_down(vector<int>& A, int pos);
void swap(vector<int>& A, int pos_1, int pos_2);


int main() {

	// 2i+1, (i-1)/2;
	vector<int> A{};
	print_vector(A);
	
	insert(A, 1);
	print_vector(A);

	insert(A, 0);
	print_vector(A);

	insert(A, 2);
	print_vector(A);

	insert(A, 0);
	print_vector(A);

	insert(A, 3);
	print_vector(A);

	insert(A, 0);
	print_vector(A);


}



void delet(vector<int>& A, int pos)
{

	int tmp;
	int N = A.size() - 1;

	if (N < 0) {
		return;
	}

	tmp = A[pos];
	A[pos] = A[N];
	A[N] = tmp;
	A.pop_back();
	
	sift_down(A, pos);

}

void sift_down(vector<int>& A, int pos) {

	int tmp;

	while (A.size() > 2 * pos + 2 && (A[pos] > A[2 * pos + 1] || A[pos] > A[2 * pos + 2])) {
		
		if (A[2 * pos + 1] < A[2 * pos + 2]) {
			swap(A, pos, 2 * pos + 1);
			pos = 2 * pos + 1;
		}
		else {
			swap(A, pos, 2 * pos + 2);
			pos = 2 * pos + 2;
		}
	}
}

void insert(vector<int>&A, int x) {

	A.push_back(x);
	int pos = A.size() - 1;
	sift_up(A, pos);
}

void sift_up(vector<int>& A, int pos) {

	int tmp;

	while (A[(pos - 1) / 2] > A[pos]) {

		swap(A, pos, (pos - 1) / 2);
		pos = (pos - 1) / 2;
	
	}

}

int get_min(vector<int>& A) {
	return A[0];
}

void swap(vector<int>& A ,int pos_1, int pos_2) {
	
	int tmp = A[pos_1];
	A[pos_1] = A[pos_2];
	A[pos_2] = tmp;

}

void print_vector(vector<int>& A) {

	string result = "";

	for (int i = 0; i < A.size(); i++) {
		result += to_string(A[i]) + " ";
	}

	cout << result << endl;
}
