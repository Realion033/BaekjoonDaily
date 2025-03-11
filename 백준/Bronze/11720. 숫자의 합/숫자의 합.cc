#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, result = 0;
    string numbers;

    cin >> N;       
    cin >> numbers; 
    for (int i = 0; i < N; i++)
    {
        result += numbers[i] - '0';
    }

    cout << result;

    return 0;
}
