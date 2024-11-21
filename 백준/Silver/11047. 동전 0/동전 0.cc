#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K, cnt = 0;

    cin >> N >> K;
    vector<int> arr(N);


    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }


    for (int i = N - 1; i >= 0; --i)
    {
        if (arr[i] <= K)
        {
            cnt += K / arr[i];
            K %= arr[i];
        }
    }

    cout << cnt << endl;

    return 0;
}
