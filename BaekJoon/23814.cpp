#include <iostream>
using namespace std;
int main(void) {
	long long N, M, K, D, temp = 0, num = 0, b, Bok = 0, n, m;
	cin >> D;
	cin >> N >> M >> K;
	n = N % D;
	m = M % D;
	b = K;

	temp = N / D + M / D + K / D;
	num = temp;
	b = K;
	if (b >= 0) {
		if (num < temp) {
			Bok = b;
			num = temp;
		}
		else if (num == temp) {
			if (Bok < b) Bok = b;
		}
	}

	temp = (N + (D - n)) / D + M / D + (K - (D - n)) / D;
	b = K - (D - n);
	if (b >= 0) {
		if (num < temp) {
			Bok = b;
			num = temp;
		}
		else if (num == temp) {
			if (Bok < b) Bok = b;
		}
	}
		

	temp = N / D + (M + (D - m)) / D + (K - (D - m)) / D;
	b = K - (D - m);
	if (b >= 0) {
		if (num < temp) {
			Bok = b;
			num = temp;
		}
		else if (num == temp) {
			if (Bok < b) Bok = b;
		}
	}
		

	temp = (N + (D - n)) / D + (M + (D - m)) / D + (K - (D - n) - (D - m)) / D;
	b = K - (D - n) - (D - m);
	if (b >= 0) {
		if (num < temp) {
			Bok = b;
			num = temp;
		}
		else if (num == temp) {
			if (Bok < b) Bok = b;
		}
	}
		
	cout << Bok;
	return 0;
}
