
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;


int op_count(string parol);

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t;
	int count_op;
	cin >> t;
	string parol;


	for (int i = 0; i < t; i++) {
		
		cin >> parol;
		
		cout << op_count(parol) << endl;
	}

	return 0;
}

int op_count(string parol) {

	int count = 0;
	int number;
	int ch = 1;
	char c;


	for (int i = 0; i < 4; i++) {
		
		c = parol[i];
		number = int(c) - 48;
		
		if (number == 0) {
			number = 10;
			//ch = 10;
			if (ch == 0) {
				ch = 10;
			}
		}

		if (number != ch) {

			count = count + abs(number - ch);
			count++;
			ch = number;
		}
		else {
			count++;
		}
	}

	return count;
}