#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<int> dp(n, 1); // 모든 dp[i]의 초기값은 1
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++) // i보다 작은 인덱스에서
        {
            if (v[j] < v[i]) // v[i]가 v[j]보다 큰 경우에만
                dp[i] = max(dp[i], dp[j] + 1); // 가장 큰 dp[j] + 1로 갱신
        }
    }
    
    cout << *max_element(dp.begin(), dp.end()); // dp 배열에서 가장 큰 값을 출력
}