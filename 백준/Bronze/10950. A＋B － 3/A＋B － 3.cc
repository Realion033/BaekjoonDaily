#include<iostream>

using namespace std;

int main() {
	
	int answer, a, b;

	cin >> answer;

	for (int i = 0; i < answer; ++i) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

}