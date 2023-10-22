#include <iostream>;
using namespace std;
 

int main() {

	int A1[10];
	A1[0] = 5;
	A1[1] = 9;

	cout << A1[0] << " " << &A1[0] << " " << *&A1[0] << endl;
	cout << A1[1] << " " << &A1[1] << " " << *&A1[1] << endl;
	cout << &A1[0] << " " << &A1[0] + 1 << " " << *(&A1[0] + 1) << endl;


	return 0;
}