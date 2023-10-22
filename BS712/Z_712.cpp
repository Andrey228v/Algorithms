#include <iostream>;
#include <vector>;
#include <string>;
#include <fstream>

using namespace std;

int find_min_S(int w, int h, int n);
int find_max(int a, int b);
bool good_S(int w, int h, int n, int m);

int main() {

	ifstream in("input.txt");
	ofstream out("output.txt");
	int w, h, n;
	int test1, test2, test3, test4;

	in >> w >> h >> n;

	test1 = find_min_S(1, 1, 5);
	test2 = find_min_S(w, h, n);
	test3 = find_min_S(1, 1, 2);
	test4 = find_min_S(2, 2, 5);

	cout << "Test 1:\t" << test1 << "\tresult:\t" << "3" << endl;
	cout << "Test 2:\t" << test2 << "\tresult:\t" << "9" << endl;
	cout << "Test 3:\t" << test3 << "\tresult:\t" << "2" << endl;
	cout << "Test 4:\t" << test4 << "\tresult:\t" << "5" << endl;

	return 0;
}

int find_min_S(int w, int h, int n) {

	int lp = 0;
	int rp = find_max(w, h) * n;
	int mp;

	while (rp > lp + 1) {
		mp = (lp + rp) / 2; 
		if (good_S(w, h, n, mp)) {
			rp = mp;
		}
		else {
			lp = mp;
		}
	}
	return rp;
}

bool good_S(int w, int h, int n, int m) {
	return (m / w) * (m / h) >= n;
}


int find_max(int a, int b) {
	
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
