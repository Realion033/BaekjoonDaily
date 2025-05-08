#include <iostream>
#include <string>

void Solution(int n)
{
    int cnt = 0;
    int leagendSuutja = 666;

    while (true)
    {
        if (std::to_string(leagendSuutja).find("666") != std::string::npos)
        {
            cnt++;
            if (cnt == n)
            {
                std::cout << leagendSuutja << std::endl;
                break;
            }
        }
        leagendSuutja++;
    }
}

int main()
{
    int N;
    std::cin >> N;
    Solution(N);
    return 0;
}
