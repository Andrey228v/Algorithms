#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int find_optimal_game(vector<int>& A, int position, vector<int>& cashe, long long result);

int main() {

	int N;
	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> N;
	vector<int> arr_temp(N);
	vector<int> cashe(N);


	for (int i = 0; i < N; i++) {
		in >> arr_temp[i];
	}

	int R1 = find_optimal_game(arr_temp, 0, cashe, 0);
	int R2 = find_optimal_game(arr_temp, N-1, cashe, 0);



	return 0;
}

int find_optimal_game(vector<int>& A, int position_card_taken, vector<int>& cashe, long long result) {
	
	
	cout << A.size() << endl;
	result = A.front();
	vector<int>::iterator it = A.cbegin();

	A.erase(position_card_taken);
	cout << A.size() << endl;

	//int Path_1 =   ()
 	
		
		// Path_2

	return 0;

}

