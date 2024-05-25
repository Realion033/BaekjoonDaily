#include <iostream>

using namespace std;

int main()
{
    int a, plus = 0, add = 999999;

    for (int i = 0; i < 7; ++i) {
        cin >> a;
        if (a % 2 != 0) {
            plus += a;
            if (a < add) {
                add = a;
            }
        }
    }
    if (plus == 0) {
        cout << -1;
    }
    else {
        cout << plus << endl;
        cout << add;
    }
}