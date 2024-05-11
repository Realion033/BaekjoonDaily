#include <iostream>
using namespace std;
long long CountingStar(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return CountingStar(n - 1) * n;
	}
}
int main() {
	int a;
	cin >> a;
	cout << CountingStar(a);
}