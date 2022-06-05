#include <iostream>
using namespace std;
int main(void) {
	int T, A, B, C;
	cin >> T;
	A = T / 300;
	B = (T % 300) / 60;
	C = ((T % 300) % 60) / 10;
	if (((T % 300) % 60) % 10 != 0) cout << "-1" << '\n';
	else cout << A << ' ' << B << ' ' << C << endl;
	return 0;
}
