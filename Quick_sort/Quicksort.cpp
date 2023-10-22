#include <iostream>
#include <random>
#include <vector>
#include <string>

using namespace std;

void quick_sort(vector<int>& V, int start, int end);

void Print_vector(vector<int> V);




int main() {

	int N = 10;
	vector<int> vA{ 4, 13, 8, 11, 1, 22, 8, 10, 1, 2 };
	vector<int> vA1;
	vector<int> vA2;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(1, N);

	int x = dist(gen);
	int vA_size = vA.size() - 1;


	Print_vector(vA);
	quick_sort(vA, 0, vA_size);
	Print_vector(vA);

	return 0;
}


void quick_sort(vector<int>& V, int start, int end) {

	if (start >= end) {
		return;
	} 

	int lp = start; 
	int rp = end;
	int pivot = V[rp];
	cout << V[rp] << endl;

	while (lp <= rp) {

		while (V[lp] < pivot) {
			lp++;
		}
		while (V[rp] > pivot) {
			rp--;
		}
		if (lp >= rp) {
			break;
		}

		swap(V[lp++], V[rp--]);
	}
	
	cout << rp << " " << end << " " << V[rp] << endl;
	//quick_sort(V, start, lp - 1);
	//quick_sort(V, rp + 1, end);

}

void Print_vector(vector<int> A) {

	string result;


	for (int i = 0; i < A.size(); i++) {

		result += to_string(i) + ": " + to_string(A[i]) + "\t";
	}

	cout << result << endl;

}
