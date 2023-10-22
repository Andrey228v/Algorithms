#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

void Print_vector(vector<int> &A);

int Find_summ(int X, vector<int> &A);


// 1) Самый длинный отрезок, сумма которого не превышает Х

int main()
{
	int N = 20;
	int X = 35;
	vector<int> A = {10, 100, 20, 30, 50, 60, 70, 80};
	//Print_vector(A);
	int result = Find_summ(X, A);

	return 0;
}


int Find_summ(int X, vector<int>& A) {
	
	int current_summ = 0;
	//int rp = 0;
	//int lp = 0;

	for (int rp = 0, lp = 0; rp < A.size(); rp++) {

		current_summ += A[rp];
		cout << rp << " " << current_summ << endl;



	}
	
	


	return current_summ;
}


void Print_vector(vector<int>& A) {

	string result;


	for (int i = 0; i < A.size(); i++) {

		result += to_string(i) + ": " + to_string(A[i]) + "\t";
	}

	cout << result << endl;

}


