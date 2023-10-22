#include <iostream>;
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;


int find_beast_team(vector<int> Pi);


int main() {

	int N;
	int result = 0;


	ifstream in("input.txt");
	ofstream out("output.txt");

	in >> N;
	vector<int> Pi(N);

	for (int i = 0; i < N; i++) {
		in >> Pi[i];
	}

	if (Pi.size() != 0) {
		result = find_beast_team(Pi);
	}
	
	cout << result << endl;
	out << result;


	in.close();
	out.close();

	return 0;
}

int find_beast_team(vector<int> Pi) {
	

	if (Pi.size() == 1) {
		return Pi[0];
	}

	sort(Pi.begin(), Pi.end());
	reverse(Pi.begin(), Pi.end());

	int lp = 0;
	int max_summ_pi = Pi[0];
	int target_sum = 0;
	int min_summ_pi = 0;

	
	int max_elem = Pi[0];
	int min_elem = Pi[0];
	

	for (int rp = 0; rp < Pi.size(); rp++) {

		cout << "rp:" << Pi[rp] << endl;

		min_elem = Pi[rp];

		if (rp == Pi.size() - 1) {
			min_summ_pi = Pi[rp] + Pi[rp - 1];
		}
		else {
			min_summ_pi = Pi[rp] + Pi[rp + 1];
		}

		target_sum += Pi[rp];

		while (max_elem > min_summ_pi) {

			if (max_summ_pi < target_sum) {

				max_summ_pi = target_sum;
			}

			target_sum -= Pi[lp];
			lp++;
			
			max_elem = Pi[lp];
		}
	}

	if (max_summ_pi < min_summ_pi) {
		max_summ_pi = min_summ_pi;
	}

	if (max_summ_pi < target_sum) {
		max_summ_pi = target_sum;
	}

	return max_summ_pi;
}

