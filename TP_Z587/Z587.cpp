#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#define PI 3.14


using namespace std;





struct Rocket_motors {

	double power;
	double rectangle;
	double power_x;
	int id;
};

void Reshenie(vector<Rocket_motors> &RM);
bool comparator_rocket(Rocket_motors &a, Rocket_motors &b);



int main() {

	int N;
	ifstream in("input.txt");
	ofstream out("output.txt");
	//scanf_s("%d", &N);

	in >> N;
	double a;
	cout << N << endl;
	//vector<double> arr_motors(N);
	//vector<double> arr_motors_rectangle(N);
	vector<Rocket_motors> v_Rocket(N);


	for (int i = 0; i < N; i++) {
		in >> v_Rocket[i].power;
		in >> v_Rocket[i].rectangle;
		v_Rocket[i].power_x = round(v_Rocket[i].power * cos(v_Rocket[i].rectangle * PI / 180)*100)/100;
		v_Rocket[i].id = i+1;
	}

	for (Rocket_motors elem : v_Rocket) {
		cout << elem.power << " " << elem.rectangle << endl;
		cout << "rectangle:" << elem.rectangle << " " << "power_x:" <<  elem.power_x << endl;
	}

	sort(v_Rocket.begin(), v_Rocket.end(), comparator_rocket);

	cout << "После сортровки:" << endl;


	Reshenie(v_Rocket);

	for (Rocket_motors elem : v_Rocket) {
		cout << elem.power << "\t" << elem.rectangle << "\t" << elem.power_x << endl;
	}

	out << v_Rocket.size() << "\n";

	for (Rocket_motors elem : v_Rocket) {
		out << elem.id << " ";
	}

	return 0;
}

bool comparator_rocket(Rocket_motors &a, Rocket_motors &b) {
	return a.power_x > b.power_x;
}


void Reshenie(vector<Rocket_motors> &RM) {

	
	int lp = 0;
	int rp = 0;
	vector<Rocket_motors> Result;

	for (int i = RM.size() - 1; i >= 0; i--) {

		if (RM[i].power_x <= 0) {
			RM.pop_back();
		}

	}

}