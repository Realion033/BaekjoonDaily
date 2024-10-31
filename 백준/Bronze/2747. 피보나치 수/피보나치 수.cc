#include <iostream>

int F[99] = { 0, 1 };

int Fibo(int n)
{
    //재귀사용
    /*if (n == 0 || n == 1)
    {
        return F[n];
    }
    if (F[n] == NULL)
    {
        F[n] = Fibo(n - 1) + Fibo(n - 2);
    }
    return F[n];*/

    //for사용
    for (int i = 2; i <= n; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }

    return F[n];
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << Fibo(num) << std::endl;

    return 0;
}
