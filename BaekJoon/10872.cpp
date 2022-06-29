#include <iostream>
using namespace std;

int factorial(int num) {
	if (num == 0) return 1;
	else return num * factorial(num - 1);
}

int main(void) {
	int N;
	cin >> N;
	cout << factorial(N) << '\n';

	return 0;
}
