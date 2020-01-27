#include <iostream>
using namespace std;

int solve(int n) {
	int out = 0, temp = 0, i = 666;
	while (n != 0){
		temp = i;
		while (temp != 0) {
			int mod = 0;
			mod = temp % 1000;
			temp /= 10;
			if (mod == 666) {
				out = i;
				n--;
				break;
			}
		}
		i++;
	}
	return out;
}

int main() {
	int n = 0;
	cin >> n;
	printf("%d", solve(n));
}