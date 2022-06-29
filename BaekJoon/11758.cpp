#include <iostream>
using namespace std;

int ccw(int x1, int x2, int x3, int y1, int y2, int y3) {
	int temp;
	temp = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
	if (temp < 0) return -1;
	else if (temp == 0) return 0;
	else return 1;
}

int main(void) {
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << ccw(x1, x2, x3, y1, y2, y3) << endl;

	return 0;
}
