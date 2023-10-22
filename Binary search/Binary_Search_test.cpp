#include <iostream>;
#include <vector>;
#include <string>;
#include <algorithm>



using namespace std;

int B_Search_method_1(vector<int> numbers, int value);

int B_Search_method_2(vector<int> numbers, int value);

int B_Search_method_3(vector<int> numbers, int value);

int B_Search_upper_bound(vector<int> numbers, int value);

void Print_vector(vector<int>& A);


int main() {

	vector<int> A{10, 15, 20, 25, 30, 35, 40};
	int value = 0;
	int pos, pos_2, pos_3, pos_4, pos_5;

	Print_vector(A);

	pos = B_Search_method_1(A, value);
	cout << "pos_1: " << pos << "\tfind: " << value << "\treuslt: " << A[pos] << endl;

	pos_2 = B_Search_method_2(A, value);
	if ((pos_2 < 0) || (pos_2 >= A.size())) {
		cout << "Number nor found" << endl;
	}
	else {
		cout << "pos_2: " << pos_2 << "\tfind: " << value << "\treuslt: " << A[pos_2] << endl;
	}

	pos_3 = B_Search_method_3(A, value);
	if ((pos_3 < 0) || (pos_3 >= A.size())) {
		cout << "Number not found" << endl;
	}
	else {
		cout << "pos_3: " << pos_3 << "\tfind: " << value << "\treuslt: " << A[pos_3] << endl;
	}

	// Первое большее значение
	vector<int>::iterator  upper_1 = upper_bound(A.begin(), A.end(), 0);
	cout << "Number upper bound: " << (upper_1 - A.begin()) << endl;

	//Первое не меньше значение
	vector<int>::iterator lower_1 = lower_bound(A.begin(), A.end(), 26);
	cout << "Number lower bound: " << (lower_1 - A.begin()) << endl;


	return 0;
}


void Print_vector(vector<int>& A) {

	string result;
	

	for (int i = 0; i < A.size(); i++) {
		
		result += to_string(i) + ": " + to_string(A[i]) + "\t";
	}

	cout << result << endl;
	
}


//Плохая реализация бинарного поиска
int B_Search_method_1(vector<int> numbers, int value) {

	int position;
	int lp = 0;
	int rp = numbers.size() - 1;
	int midle_pos;


	while (rp >= lp) {
		midle_pos = (rp + lp) / 2;
		if (numbers[midle_pos] < value) {
			lp = midle_pos + 1;
		}
		else if (numbers[midle_pos] > value) {
			rp = midle_pos - 1;
		}
		else
			return midle_pos;
	}


	return 0;
}

//min i: a[i] >= x; a[lp]<x; a[rp] >=x;
int B_Search_method_2(vector<int> numbers, int value) {

	int lp = -1;
	int rp = numbers.size();
	int mp;

	while (rp > lp + 1) {
		mp = (lp + rp) / 2;
		if (numbers[mp] >= value) {
			rp = mp;
		}
		else {
			lp = mp;
		}
	}

	return rp;

}

//min i: a[i] <=x; a[lp] >=x; a[rp] < x;
int B_Search_method_3(vector<int> numbers, int value) {

	int lp = -1;
	int rp = numbers.size();
	int mp;

	while (rp > lp + 1){
		mp = (lp + rp) / 2;
		if (numbers[mp] > value) {
			rp = mp;
		}
		else {
			lp = mp;
		}
	}
	return lp;
}


int B_Search_upper_bound(vector<int> numbers, int value) {





	return 0;
}