#include <iostream>

int Nums[51];

int CalcPattern(int nums[], int n)
{
    int answer, MultiplyA, PlusB; // X*A+B
    bool isPossible = true;

    int diff1 = nums[1] - nums[0];
    int diff2 = nums[2] - nums[1];

    // 두 수의 차를 토대로 예외처리
    if (diff1 == 0)
    {
        if (diff2 != 0) // 나누는게 불가능해짐
        {
            isPossible = false;
        }
        else // 아닐경우 값 반환 (같은 숫자의 반복?)
        {
            MultiplyA = 1;
            PlusB = 0;
        }
    }
    else
    {
        if ((diff2 % diff1) != 0) // 성립이 안됨 ex) 9 8 3
        {
            isPossible = false;
        }
        else
        {
            MultiplyA = diff2 / diff1;
            PlusB = nums[1] - nums[0] * MultiplyA; // 수정: B값 계산 오류 수정
        }
    }

    // 노가다 대조
    for (int i = 1; i < n; i++)
    {
        int expected = nums[i - 1] * MultiplyA + PlusB; // 예상값

        if (expected != nums[i]) // 예상값과 이전 값이 다른때
        {
            isPossible = false;
            break;
        }
    }

    // answer
    if (isPossible)
    {
        answer = nums[n - 1] * MultiplyA + PlusB;
        std::cout << answer;
    }
    else
    {
        std::cout << "B";
    }

    return 0; // 변경: 일관성 있게 main에서 처리하도록
}

int main()
{
    int input;

    // input
    std::cin >> input;
    for (int i = 0; i < input; i++)
    {
        std::cin >> Nums[i];
    }

    // input이 1과 2인경우 예외처리
    if (input == 1) // 수정: = → ==
    {
        std::cout << "A";
    }
    else if (input == 2)
    {
        if (Nums[0] == Nums[1])
        {
            std::cout << Nums[0];
        }
        else
        {
            std::cout << "A";
        }
    }
    else
    {
        CalcPattern(Nums, input); // 세 번째 이상일 경우 함수 호출
    }

    return 0;
}
