

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>



using namespace std;



int main() {
	
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n;
	cin >> n;

	vector<int> chocolat_t(n);
	int count_Al = 0;
	int	count_Bob = 0;
	int t_Al = 0;
	int t_Bob = 0;


	for (int i = 0; i < n; i++) {
		cin >> chocolat_t[i];
	}

	t_Al += chocolat_t[0];
	count_Al++;
	t_Bob += chocolat_t[n-1];

	if (0 != n-1) {
		count_Bob++;
		
	}
	else {
		cout << count_Al << " " << count_Bob << endl;
		return 0;
	}

	int lp = 0;
	int rp = n - 1;

	
	while (lp < rp - 1) {
	

		if (t_Al <= t_Bob) {
			//Двигается АЛ.
			lp++;
			count_Al++;
			t_Al += chocolat_t[lp];
		}
		else {
			rp--;
			count_Bob++;
			t_Bob += chocolat_t[rp];
		}

	}


	cout << count_Al << " " << count_Bob;

	return 0;
}