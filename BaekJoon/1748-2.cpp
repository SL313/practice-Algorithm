#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	int N, temp = 0, num = 0, sum = 0, n = 0;
	cin >> N;
	temp = N;
	while (temp > 0) {
		temp /= 10;
		num++;
	}
	if (num == 1) cout << N;
	else {
		for (int i = 1; i <= pow(10, num - 2); i*=10) {
			n++;
			sum += 9 * i * n;
		}
		sum += num * (N - (pow(10, num - 1) - 1));
		cout << sum;
	}
	return 0;
}
