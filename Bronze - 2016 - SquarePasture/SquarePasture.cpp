#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


	struct Rect {
		int x1, y1, x2, y2;
};

int check(Rect p, Rect q){
	
	int mostleft = min(p.x1, q.x1);
	int mostbottom = min(p.y1, q.y1);

	int mostright = max(p.x2, q.x2);
	int mosttop = max(p.y2, q.y2);

	// (mostleft, mostbottom), (mostright, mosttop)
	int ans = max((mosttop - mostbottom), (mostright - mostleft));

	return pow(ans, 2);

}


int main() {

	ifstream cin ("pasture.in");
    ofstream cout ("pasture.out");

    Rect a, b;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    std::cout << check(a, b) << endl;


}
