#include <iostream>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	for (int i = 1; i <= 5 * N - N; i++) {
		for (int j = 1; j <= N; j++)
			cout << '@';
		cout << '\n';
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= 5 * N; j++)
			cout << '@';
		cout << '\n';
	}
	return 0;
}
