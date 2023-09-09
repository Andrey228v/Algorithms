#include <iostream>
#include <fstream>


int N, X, Y, X1, Y1, X2, Y2, X3, Y3, X4, Y4;
//std::cin >> N;
std::ifstream in("input.txt");
std::ofstream out("output.txt");


struct Point
{
	int x;
	int y;
};

struct Line {
	int x1;
	int y1;
	int x2;
	int y2;
};

struct Rectangle {
	Point Point_1;
	Point Point_2;
	Point Point_3;
	Point Point_4;

	Line L1{ Point_1.x, Point_1.y, Point_2.x, Point_2.y };
	Line L2{ Point_2.x, Point_2.y, Point_3.x, Point_3.y };
	Line L3{ Point_3.x, Point_3.y, Point_4.x, Point_4.y };
	Line L4{ Point_4.x, Point_4.y, Point_1.x, Point_1.y };

	Line all_Line[4]{ L1, L2, L3, L4 };
};

int checking_the_lockation(Point location, Rectangle Rect);


int main() {

	int array[10];
	int i = 0;
	in >> N;
	std::cout << "N:" << N << std::endl;
	int counter = 0;

	while (i < N) {
		
		in >> X >> Y >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
		std::cout << "X:" << X << "Y:" << Y << std::endl;
		Point Point_location{ X, Y };
		Point Point_1{ X1, Y1 };
		Point Point_2{ X2, Y2 };
		Point Point_3{ X3, Y3 };
		Point Point_4{ X4, Y4 };
		Rectangle R1{ Point_1, Point_2, Point_3, Point_4 };
		checking_the_lockation(Point_location, R1);

		i++;
	}
	
	return 0;
}

int checking_the_lockation(Point location, Rectangle Rect) {

	int result = 0;
	int intesection_line = 0;
	
	for (int i = 0; i < std::size(Rect.all_Line); i++) {
		for (int j = 0; j < std::size(Rect.all_Line); j++) {

			Line beam_lockation_to_point_rectangle{location.x, location.y, Rect.all_Line[i].x1, Rect.all_Line[i].y1};


		}
	}

	return result;
}

int checking_the_intersection(Line L1, Line L2) {
	int result = 0;
	
	if ((L1.x1 <= L2.x1 && L2.x1 < L1.x2) || (L1.x1)) {

	}

	if () {

	}


	
	return result;
}
