#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


struct Rect {
	int x1, y1, x2, y2;
};

int check(Rect p, Rect q) {

	int area = (p.y2 - p.y1)*(p.x2 - p.x1);

	int x2s = min(p.x2, q.x2);
	int x1s = max(p.x1, p.x2);

	int side1 = x2s - x1s;

	int y2s = min(p.y2, q.y2);
	int y1s = max(p.y1, q.y1);

	int side2 = y2s - y1s;

	int case_ = p.y2 - p.y1;
	int case_2 = p.x2 - p.x1;

	int interArea = side1*side2;

	if (area == interArea) {
		return 0;
	}

	if (interArea <= 0) {
		return area;
	}

	if (case_ == side2 or case_2 == side1) {
		return area - interArea;
	}

	return 0;




}


int main() {

	ifstream cin ("BillboardsII.in");
    ofstream cout ("BillboardsII.out");

    Rect a, b;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    std::cout << check(a, b) << endl;


}
