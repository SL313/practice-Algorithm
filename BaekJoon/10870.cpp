#include <iostream>
using namespace std;

int fibo(int num) {
	if (num == 0) return 0;
	else if (num == 1)return 1;
	else return fibo(num - 1) + fibo(num - 2);
}

int main(void) {
	int N = 0;
	cin >> N;
	cout << fibo(N) << '\n';
	return 0;
}
