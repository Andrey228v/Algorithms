// https://codeforces.com/problemset/problem/279/B

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>



using namespace std;

int main() {

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int N, t;
	int current_time = 0;
	int current_book = 0;
	int max_count_book = 0;

	//ifstream in("input.txt");
	//ofstream out("output.txt");

	cin >> N >> t;
	vector<int> book(N);

	for (int i = 0; i < N; i++) {
		cin >> book[i];
	}

	for (int rp = 0, lp = 0; rp < N; rp++) {
		
		current_time += book[rp];
		current_book++;

		if (current_time <= t) {
			max_count_book = max(max_count_book, current_book);
		}
		else {

			while (current_time > t) {
				current_time -= book[lp];
				current_book--;
				lp++;
			}
		}

	}

	cout << max_count_book << endl;

	return 0;
}




